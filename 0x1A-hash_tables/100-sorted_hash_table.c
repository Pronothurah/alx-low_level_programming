#include "hash_tables.h"

/**
* shash_table_create - creates a sorted hash table
* @size: size of table
* Return: pointer to new table or null if failure
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht  = malloc(sizeof(shash_table_t));
	if (!sht)
	{
		return (NULL);
	}

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}

/**
* make_shash_node - creates a sorted hash table
* @key: key for node
* @value: value for node
* Return: new node or null on failure
*/
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shash_node;

	shash_node = malloc(sizeof(shash_node_t));
	if (shash_node == NULL)
	{
		return (NULL);
	}

	shash_node->key = strdup(key);
	if (shash_node->key == NULL)
	{
		free(shash_node);
		return (NULL);
	}

	shash_node->value = strdup(value);
	if (shash_node->value == NULL)
	{
		free(shash_node->key);
		free(shash_node);
		return (NULL);
	}
	shash_node->next = shash_node->snext = shash_node->sprev = NULL;
	return (shash_node);
}

/**
* add_to_sorted_list - adds a node to the sorted linked list
* @table: the sorted hash table
* @node: node to add
* Return: void
*/
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;

	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
			{
				node->sprev->snext = node;
			}
			else
			{
				table->shead = node;
			}
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
* shash_table_set - sets a key to value in sorted hash table
* @ht: hash table to update the key/value to
* @key: key
* @value: key value
* Return: 1 if it succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	shash_node_t *shash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	|| key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	shash_node = make_shash_node(key, value);
	if (shash_node == NULL)
	{
		return (0);
	}
	shash_node->next = ht->array[idx];
	ht->array[idx] = shash_node;
	add_to_sorted_list(ht, shash_node);
	return (1);
}

/**
* shash_table_get - retrieves value from sorted hash table
* @ht: hash table
* @key: key value to data
* Return: data value or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int idx;

	if (ht->array == NULL || ht == NULL || ht->size == 0
	|| strlen(key) == 0 || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

/**
* shash_table_print - prints a sorted hash table
* @ht: hash table
* Return: printed hash table
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	tmp = ht->shead;

	while (tmp != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s' : '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
* shash_table_delete - deletes a sorted hash table
* @ht: hash table
* Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *last;

	if (ht == NULL)
		return;
	printf("{");
	last = ht->stail;
	while (last != NULL)
	{
		printf("\'%s\': \'%s\'", last->key, last->value);
		last = last->sprev;
		if (last)
			printf(", ");
	}
	printf("}\n");
}




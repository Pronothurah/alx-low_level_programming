#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head node
 * @idx: index of the of list where the new node should be inserted
 * @n: value of new node
 * Return: address of new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}

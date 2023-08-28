#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list.
 * @head: pointer to the first node
 * @n: node to be added
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_end_node)
		return (NULL);

	new_end_node->next = NULL;
	new_end_node->n = n;
	if (!*head)
		*head = new_end_node;
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_end_node;
	}

	return (new_end_node);
}

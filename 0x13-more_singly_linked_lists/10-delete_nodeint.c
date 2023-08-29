#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to head node
 * @index: index of node to be deleted
 *
 * Returns: 1 if succeded -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int n = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (n == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		n++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}

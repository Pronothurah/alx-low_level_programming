#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: pointer to head node
 *
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list.
 * frees a listint_t list.
 * @h: pointer to head node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	loop_node = find_listint_loop(*h);
	for (len = 0; (*h != loop_node || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}

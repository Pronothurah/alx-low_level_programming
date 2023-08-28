#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

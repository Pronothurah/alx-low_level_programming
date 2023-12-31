#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to the first node
 * @n: node to be added
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}

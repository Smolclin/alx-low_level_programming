#include "lists.h"

/**
 * add_nodeint - function that adds a new
 * node at the beginning of a list
 * @head: pointer to head
 * @n: new node to be added
 * Return: always 0 (success)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (head == NULL)
		return (0);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
		n_node->next = NULL;
	else
		n_node->next = *head;
	n_node->n = n;
	*head = n_node;

	return (0);
}

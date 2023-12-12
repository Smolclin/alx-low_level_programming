#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list
 * @head: pointer to the head node
 * Return: the head node data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (n);
}

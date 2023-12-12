#include "lists.h"

/**
 * free_listint2 - function that frees
 * listint_t list
 * @head: pointer to the head pointer
 * Return: always 0 (success)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}

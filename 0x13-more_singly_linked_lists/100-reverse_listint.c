#include "lists.h"

/**
 * reverse_listint - function that reverses a
 * listint_t linked list
 * @head: pointer to the head node
 * Return: always 0 (success)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_n;
	listint_t *new_temp_n;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp_n = *head;
	*head = temp_n->next;
	temp_n->next = NULL;

	while (*head != NULL)
	{
		new_temp_n = (*head)->next;
		(*head)->next = temp_n;
		temp_n = *head;
		if (new_temp_n == NULL)
			return (*head);
		*head = new_temp_n;
	}
	if (*head == NULL)
	{
		*head = temp_n;
		return (*head);
	}
	return (NULL);
}

#include "lists.h"

/**
 * free_listint - function that frees
 * listint_t list
 * @head: pointer to the head
 * node
 * Return: always 0 (success)
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}


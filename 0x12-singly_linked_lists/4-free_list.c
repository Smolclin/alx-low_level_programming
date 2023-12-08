#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: the head of node
 * Return: the freed node
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

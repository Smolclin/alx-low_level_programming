#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index
 * @head: pointer to the head node
 * @index: the index position
 * Return: the deleted node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *temp_n;
	listint_t *node;

	temp_n = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (j = 0; j < index - 1 && temp_n != NULL && index != 0; j++)
		temp_n = temp_n->next;
	if (temp_n == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp_n->next;
		free(temp_n);
		*head = node;
	}
	else
	{
		if (temp_n->next == NULL)
			node = temp_n->next;
		else
			node = temp_n->next->next;
		free(temp_n->next);
		temp_n->next = node;
	}
	return (1);
}

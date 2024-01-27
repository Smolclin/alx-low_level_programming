#include "lists.h"
/*
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: Pointer to the head of the double linked list
 * @index: The index of the node to be retreaved
 *
 * Return: if the node does not exist return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}

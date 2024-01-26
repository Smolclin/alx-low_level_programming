#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list
 * @h: pointer to the head of the linked list
 * Return: the number fo elements of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int no;

	no = 0;

	if (h == NULL)
		return (no);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		no++;
		h = h->next;
	}
	return (no);
}

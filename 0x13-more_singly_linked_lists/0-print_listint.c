#include "lists.h"

/**
 * print_listint - program that prints the
 * elements of a listint_t
 * @h: pointer to the head
 * Return: always 0 (success)
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

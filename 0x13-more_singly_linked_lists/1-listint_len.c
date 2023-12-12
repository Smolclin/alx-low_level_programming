#include "lists.h"

/**
 * listint_len - function that returns
 * number of elements in linked list
 * @h: pointer to head
 * Return: always 0 (success)
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}
	return (cnt);
}

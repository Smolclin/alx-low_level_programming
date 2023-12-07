#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - function that returns
 * number of elements
 * @h: head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}

#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - function that print all
 * the elements
 * @h: head
 * Return: elements printed
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		j++;
		h = h->next;
	}
	return (j++);
}

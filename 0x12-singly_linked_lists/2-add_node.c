#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strlen - function that returns lenth of
 * a string
 * @c: character
 * Return: always 0
 */

int _strlen(const char *c)
{
	int j = 0;

	while (c[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * add_node - function that adds anew node
 * at the beginning of a list
 * @head: head of the node
 * @str: the string
 * Return: added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *adder;

	adder = malloc(sizeof(list_t));
	if (adder == NULL)
		return (NULL);
	adder->str = strdup(str);

	adder->len = strlen(str);
	adder->next = *head;
	*head = adder;

	return (adder);
}

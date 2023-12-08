#include "lists.h"
/**
 * _strlen - length of a string
 * @str: pointer to the length
 * of a string
 * Return: always 0 (success)
 */

unsigned int _strlen(char *str)
{
	unsigned int j;

	for (j = 0; str[j]; j++)
		;
	return (j);
}

/**
 * add_node_end - function that adds a new
 * node at the end of a list
 * @head: the head of a node
 * @str: the pointer string
 * Return: added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw, *t;

	if (str == NULL)
		return (NULL);
	nw = malloc(sizeof(list_t));

	if (nw == NULL)
		return (NULL);
	nw->str = strdup(str);
	if (nw->str == NULL)
	{
		free(nw);
		return (NULL);
	}
	nw->len = strlen(nw->str);
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = nw;
	return (nw);
}

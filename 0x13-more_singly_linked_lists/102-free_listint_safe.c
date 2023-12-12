#include "lists.h"


/**
 * free_lists - free a linked list
 * @head: pointer to the head node
 * return: always 0
 */

void free_lists(list_t **head)
{
	list_t *node_t;
	list_t *node_r;

	if (head != NULL)
	{
		node_r = *head;
		while ((node_t = node_r) != NULL)
		{
			node_r = node_r->next;
			free(node_t);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - function that frees
 * a list
 * @h: pointer to the head node
 * Return: alway 0 (success)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	list_t *hpt, *new, *add;
	listint_t *node_r;

	hpt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = hpt;
		hpt = new;

		add = hpt;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_lists(&hpt);
				return (node);
			}
		}
		node_r = *h;
		*h = (*h)->next;
		free(node_r);
		node++;
	}
	*h = NULL;
	free_lists(&hpt);
	return (node);
}

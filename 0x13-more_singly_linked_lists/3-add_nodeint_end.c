#include "lists.h"

/**
 * add_nodeint_end - function that adds
 * a new node at the end of a list
 * @head: pointer to the head pointer
 * @n: new node to be added
 * Return: always 0 (success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *tmp_node;

	(void)tmp_node;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;
	tmp_node = *head;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
		}
		tmp_node->next = end_node;
	}
	return (end_node);
}

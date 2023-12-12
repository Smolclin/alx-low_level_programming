#include "lists.h"

/**
 * c_new_node - function to create new node
 * @n: data of the node
 * Return: always 0 (success)
 */

listint_t *c_new_node(int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	return (n_node);
}

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: pointer to head node
 * @idx: the index position
 * @n: number of nodes
 * Return: the new node inserted
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *node;
	listint_t *node_old;
	listint_t *node_new;

	node = *head;
	if (head == NULL)
		return (NULL);
	node_new = c_new_node(n);
	if (node_new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}
	if (idx == 0)
		*head = node_new;
	for (j = 0; j < idx -  1 && node != NULL && idx != 0; j++)
		node = node->next;
	if (node == NULL)
		return (NULL);
	if (idx == 0)
		node_new->next = node;
	else
	{
		node_old = node->next;
		node->next = node_new;
		node_new->next = node_old;
	}
	return (node_new);
}

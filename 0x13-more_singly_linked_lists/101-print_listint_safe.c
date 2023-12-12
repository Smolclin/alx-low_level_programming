#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to head
 * Return: success
 */

void free_list(list_t **head)
{
	list_t *temp_n;
	list_t *r_node;

	if (head != NULL)
	{
		r_node = *head;
		while ((temp_n = r_node) != NULL)
		{
			r_node = r_node->next;
			free(temp_n);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints
 * a listint_t linked list
 * @head: pointer to the head node
 * Return: always 0 (success)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	list_t *hpt, *new, *add;

	hpt = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hpt;
		hpt = new;

		add = hpt;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hpt);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_list(&hpt);
	return (node);
}

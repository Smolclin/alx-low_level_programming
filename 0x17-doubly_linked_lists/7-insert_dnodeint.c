#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 * @h: pointer to the head
 * @idx: index of the list where the new node should be added
 * @n: number of nodes
 * Return: the address of the new node,or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *nw;

	unsigned int i;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = head->next;
						nw->prev = head;
						head->next->prev = nw;
						head->next = nw;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (nw);
}

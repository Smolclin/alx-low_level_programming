#include "lists.h"

/**
 * find_listint_loop - function that finds
 * the loop in a linked list
 * @head: pointer to the head node
 * Return: always 0 (success)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *p_rev;

	p = head;
	p_rev = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = p_rev;
			p_rev = p;
			while (1)
			{
				p = p_rev;
				while (p->next != head && p->next != p_rev)
				{
					p = p->next;
				}
				if (p->next == head)
					break;
				head = head->next;
			}
			return (p->next);
		}
	}
	return (NULL);
}

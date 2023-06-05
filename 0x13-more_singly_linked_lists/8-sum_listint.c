#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: head node to check
 * Return: The number of nodes in h
 */

int sum_listint(listint_t *head)
{
	register int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

#include "lists.h"

/**
 * listint_len - function that prints elements of a list.
 * @h: input to check
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}

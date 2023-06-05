#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: input value to check
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		Num++;
		h = h->next;
	}

	return (Num);
}

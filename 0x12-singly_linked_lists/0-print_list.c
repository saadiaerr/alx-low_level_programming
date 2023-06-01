#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - fun that prints all the elements of a list_t
 * @h: header file
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			num_of_nodes++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			num_of_nodes++;
		}
	}
	return (num_of_nodes);
}

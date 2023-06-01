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
	size_t number_Of_Node = 0;

	while (!h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			number_Of_Node++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			number_Of_Node++;
		}
	}
	return (number_Of_Node);
}

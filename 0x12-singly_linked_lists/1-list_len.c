#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns num in a linked list
 * list_t list
 * @h: pointer to the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}

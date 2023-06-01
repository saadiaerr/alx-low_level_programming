#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: new header
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tp;

	while (head != NULL)
	{
		tp = head;
		head = head->next;
		free(tp->str);
		free(tp);
	}
}

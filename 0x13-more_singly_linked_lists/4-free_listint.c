#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head node input to check;
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head node input to check;
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}
	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	head = NULL;
}

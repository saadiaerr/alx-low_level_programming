#include "lists.h"
/**
 * free_listint2 - a function that frees a list
 * @head: head input to check
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_n;
	listint_t *tmp;

	if (!head)
	{
		return;
	}
	current_n = *head;
	while (current_n)
	{
		tmp = current_n;
		current_n = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}

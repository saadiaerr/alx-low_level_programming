#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head node to check
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *crt_n;
	int n;

	if (!(*head) || !head)
	{
		return (0);
	}
	crt_n = *head;
	n = crt_n->n;
	*head = (*head)->next;
	free(crt_n);
	return (n);
}

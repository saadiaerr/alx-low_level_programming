#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a list
 * @head: head node to check
 * @n: input value
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));

	if (head == NULL || new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (*head)
	{
		new_n->next = *head;
	}
	*head = new_n;
	return (new_n);
}

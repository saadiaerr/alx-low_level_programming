#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at theend of a list
 * @head: head node
 * @n: input number to check
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n = malloc(sizeof(listint_t));
	listint_t *current_n = (*head);

	if (!head || !new_n)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;

	if (!(*head))
	{
		(*head) = new_n;
	}
	else
	{
		while (current_n->next)
		{
			current_n = current_n->next;
		}
		current_n->next = new_n;
	}
	return (new_n);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - function that prints elements of a list
 * @head: head node
 * @n: number of input
 * @idx: is the index of the list where the new node should be added
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_n;
	unsigned int y;

	new_n = malloc(sizeof(listint_t));
	if (head == NULL || new_n == NULL)
	{
		return (NULL);
	}
	new_n->n = n;
	if (!idx)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	tmp = *head;
	while (tmp)
	{
		if (y == idx - 1)
		{
			new_n->next = tmp->next;
			tmp->next = new_n;
			return (new_n);
		}
		y++;
		tmp = tmp->next;
	}
	free(new_n);
	return (NULL);
}

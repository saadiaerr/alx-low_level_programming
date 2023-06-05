#include "lists.h"

/**
 * delete_nodeint_at_index - function prints elements of a list
 * @head: head node input
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	{
		listint_t *curr_n = (*head);
		listint_t *next;

		unsigned int y = 0;

		if (head == NULL || (*head) == NULL)
		{
			return (-1);
		}
		curr_n = (*head);
		if (!index)
		{
			(*head) = curr_n->next;
			free(curr_n);
			return (1);
		}
		for (; curr_n && y < index - 1; y++)
		{
			curr_n = curr_n->next;
		}
		if (curr_n == NULL || (curr_n->next) == NULL)
		{
			return (-1);
		}
		next = curr_n->next->next;
		free(curr_n->next);
		curr_n->next = next;
		return (1);
	}
}

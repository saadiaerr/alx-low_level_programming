#include "lists.h"

/**
 * get_nodeint_at_index - function that prints elements of a list_t list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, else, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *node;

	node = head;
	if (!(node))
	{
		return (NULL);
	}
	while (node)
	{
		if (cnt == index)
		{
			return (node);
		}
		cnt++;
		node = node->next;
	}
	return (node);
}

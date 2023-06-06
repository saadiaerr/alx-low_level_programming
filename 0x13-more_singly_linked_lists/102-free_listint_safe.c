#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lentgh = 0;
	int y;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			lentgh++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lentgh++;
			break;
		}
	}

	*h = NULL;

	return (lentgh);
}

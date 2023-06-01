#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: header string
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add_node = malloc(sizeof(list_t));
	if (!add_node)
		return (NULL);
	add_node->str = strdup(str);
	add_node->len = len;
	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add_node;
	return (add_node);
}

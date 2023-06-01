#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: header
 * @str: new string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	add_node = malloc(sizeof(list_t));

	if (!add_node)
		return (NULL);

	add_node->str = strdup(str);
	add_node->len = len;
	add_node->next = (*head);
	(*head) = add_node;
	return (*head);
}

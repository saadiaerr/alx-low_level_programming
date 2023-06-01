#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - function that prints the elements of the list
 * @head: header
 * @str: String
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);
	new_n->len = _strlen(str);
	new_n->str = strdup(str);
	new_n->next = *head;
	(*head) = new_n;
	return (new_n);

}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int y;

	while (s[y] != 0)
		y++;
	return (y);
}

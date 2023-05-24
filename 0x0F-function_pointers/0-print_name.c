#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that print name using pointer f
 * @name: string name
 * @f: pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (!name && !f)
		return;

	f(name);
}

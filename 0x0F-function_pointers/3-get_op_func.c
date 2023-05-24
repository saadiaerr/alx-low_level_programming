#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function
 * @s: string
 * Return: correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int y = 0;

	while (ops[y].op != NULL && *(ops[y].op) != *s)
		y++;

	return (ops[y].f);
}

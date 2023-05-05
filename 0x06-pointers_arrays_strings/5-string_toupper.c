#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int mn;

	mn = 0;
	while (n[mn] != '\0')
	{
		if (n[mn] >= 'a' && n[mn] <= 'z')
			n[mn] = n[mn] - 32;
		mn++;
	}
	return (n);
}

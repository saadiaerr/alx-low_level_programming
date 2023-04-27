#include "main.h"
/**
 *print_line -function that draws a straight line in the terminal
 *@n: the number of times the character
 */

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}

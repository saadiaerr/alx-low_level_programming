#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that Prints strings
 * @separator: The string to be printed
 * @n: The number of strings
 * @...: A variable numbeer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valiste;
	char *c;
	unsigned int y = 0;

	va_start(valiste, n);

	for (; y < n; y++)
	{
		c = va_arg(valiste, char *);
		if (!c)
			printf("(nil)");
		if (separator == NULL)
			printf("%s", c);
		else if (separator && y == 0)
			printf("%s", c);
		else
			printf("%s%s", separator, c);
	}

	printf("\n");

	va_end(valiste);
}

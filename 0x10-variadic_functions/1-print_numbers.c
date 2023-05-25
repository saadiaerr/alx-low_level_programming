#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that Prints numbers
 * @separator: a string
 * @n: The number of integers
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valiste;
	unsigned int y = 0;

	va_start(valiste, n);

	for (; y < n; y++)
	{
		printf("%d", va_arg(valiste, int));

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(valiste);
}

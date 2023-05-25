#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -function that Returns the sum of all its paramters.
 * @n: int number
 * @...: number of paramters to calculate the sum of.
 * Return: If n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valiste;
	unsigned int y = 0;
	unsigned int sum_tot = 0;

	va_start(valiste, n);

	for (; y < n; y++)
		sum_tot += va_arg(valiste, int);

	va_end(valiste);

	return (sum_tot);
}

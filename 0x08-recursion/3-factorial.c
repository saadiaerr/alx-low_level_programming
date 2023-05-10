#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number of the input
 * Return: if n > 0 factorial of n, if n < 0 indicate an error
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else

	return (n * factorial(n - 1));
}


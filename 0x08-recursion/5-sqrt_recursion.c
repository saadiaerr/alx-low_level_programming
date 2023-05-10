#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * @sq: square root
 * Return: square results
 */
int square(int n, int sq);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}
/**
 * square - serach square root
 * @n: number to calculate the sqaure root
 * @sq: square root
 * Return: square root results
 */
int square(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}

	else if (sq * sq > n)
	{
		return (-1);
	}
	else
		return (square(n, sq + 1));
}

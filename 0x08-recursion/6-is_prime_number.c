#include "main.h"
/**
 * is_prime_number - function of prime number
 * @n: int num 1
 * @n2: int num 2
 * Return: 0 or 1
 */
int check_number(int n, int n2);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_number(n, n - 1));
}
/**
 * check_number - check > n thay can divide it
 * @n: int num 2
 * @n2: int num 2
 * Return: 0 or 1
 */
int check_number(int n, int n2)
{
	if (n2 == 1)
	{
		return (1);
	}
	else if (n % n2 == 0 && n2 > 0)
	{
		return (0);
	}
	else
		return (check_number(n, n2 - 1));
}

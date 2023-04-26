#include "main.h"
/**
  * print_last_digit - function that prints the last digit of a number
  * @c: the input number to check
  * Return: lastDigit
  */
int print_last_digit(int c)
{
	int lD;

	lD = c % 10;

	if (c < 0)
	{
		_putchar(-lD + '0');
		return (-lD);
	}
	else
	{
		_putchar(lD + '0');
		return (lD);
	}
}

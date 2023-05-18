#include "main.h"
#include <stdio.h>
/**
 * _digit - checks a string
 * @strings: string to be checks
 * Return: 0 or 1
 */
int _digit(char *strings)
{
	int y = 0;

	while (strings[y])
	{
		if (strings[y] < '0' || strings[y] > '9')
			return (0);
		y++;
	}
	return (1);
}
/**
 * _str - length string
 * @c: string to check
 * Return: length
 */
int _str(char *c)
{
	int y = 0;

	while (c[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *c1, *c2;
	int lentgh1, lentgh2, lentgh, y, car, num1, num2, *solution, b = 0;

	c1 = argv[1], c2 = argv[2];
	if (argc != 3 || !_digit(c1) || !_digit(c2))
		errors();
	lentgh1 = _str(c1);
	lentgh2 = _str(c2);
	lentgh = lentgh1 + lentgh2 + 1;
	solution = malloc(sizeof(int) * lentgh);
	if (!solution)
		return (1);
	for (y = 0; y <= lentgh1 + lentgh2; y++)
		solution[y] = 0;
	for (lentgh1 = lentgh1 - 1; lentgh1 >= 0; lentgh1--)
	{
		num1 = c1[lentgh1] - '0';
		car = 0;
		for (lentgh2 = _str(c2) - 1; lentgh2 >= 0; lentgh2--)
		{
			num2 = c2[lentgh2] - '0';
			car += solution[lentgh1 + lentgh2 + 1] + (num1 * num2);
			solution[lentgh1 + lentgh2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			solution[lentgh1 + lentgh2 + 1] += car;
	}
	for (y = 0; y < lentgh - 1; y++)
	{
		if (solution[y])
			b = 1;
		if (b)
			_putchar(solution[y] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(solution);
	return (0);
}

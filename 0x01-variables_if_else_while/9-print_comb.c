#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

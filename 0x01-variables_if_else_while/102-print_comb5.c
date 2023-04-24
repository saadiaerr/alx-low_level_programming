#include <stdio.h>
/**
 * main -prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int N1, N2;

	for (N1 = 0; N1 <= 98; N1++)
	{
		for (N2 = N1 + 1; N2 <= 99; N2++)
		{
			putchar((N1 / 10) + '0');
			putchar((N1 % 10) + '0');
			putchar(' ');
			putchar((N2 / 10) + '0');
			putchar((N2 % 10) + '0');

			if (N1 == 98 && N2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

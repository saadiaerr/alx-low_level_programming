#include <stdio.h>
/**
 * main -t prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char lc;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main -program that prints the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char mn;

	for (mn = 'a'; mn <= 'z'; mn++)
	{
		if (mn != 'q' && mn != 'e')
			putchar(mn);
	}

	putchar('\n');

	return (0);
}

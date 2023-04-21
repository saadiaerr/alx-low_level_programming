#include <stdio.h>
/**
 * main -prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char cd;

	for (cd = 'a'; cd <= 'z'; cd++)
	{
		putchar(cd);
	}
	putchar('\n');
	return (0);
}

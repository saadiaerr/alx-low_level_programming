#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int ai;
	int aj;

	ai = 0;
	for (; ai < 8; ai++)
	{
		aj = 0;
		for (; aj < 8; aj++)
			_putchar(a[ai][aj]);
		_putchar('\n');
	}
}


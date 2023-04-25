#include "main.h"
/**
  * print_alphabet_x10 -  function that prints 10 times the alphabet
  */
void print_alphabet_x10(void)
{
	int li, cd;

	for (li = '0'; li <= 9; li++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

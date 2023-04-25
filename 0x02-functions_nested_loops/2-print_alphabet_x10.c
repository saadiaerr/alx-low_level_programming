#include "main.h"
/**
  * print_alphabet_x10 -  function that prints 10 times the alphabet
  */
void print_alphabet_x10(void)
{
	int li;
	char cd;

	for (li = '0'; li <= 10; li++)
	{
		for (cd = 'a'; cd <= 'z'; cd++)
			_putchar(cd);
		_putchar('\n');
	}
}

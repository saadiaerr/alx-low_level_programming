#include "main.h"
/**
  * print_alphabet_x10 -  function that prints 10 times the alphabet
  */
void print_alphabet_x10(void)
{
	int li;
	char cd;

	li = 0;

	while (li < 10)
	{
		cd = 'a';
		while (cd <= 'z')
		{
			_putchar(cd);
			cd++;
		}
		_putchar('\n');
		li++;
	}
}

#include "main.h"
/**
  * more_numbers -prints 10 times the numbers, from 0 to 14
  * Return: 0
  */
void more_numbers(void)
{
	int l, n, cnt;

	for (l = 1; l <= 10; l++)
	{
		for (cnt = 0; cnt <= 14; cnt++)
		{
			n = cnt;
			if (cnt > 9)
			{
				_putchar(1 + '0');
				n = cnt % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}

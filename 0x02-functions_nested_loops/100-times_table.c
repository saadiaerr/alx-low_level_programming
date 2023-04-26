#include "main.h"

/**
  * print_times_table - prints the n times table, starting with 0
  * @n: input number to check
  */
void print_times_table(int n)
{
	int mult, num, pr;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(0);

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				pr = num * mult;

				if (pr <= 9)
					_putchar(' ');

				if (pr <= 99)
				_ putchar(' ');

				if (pr >= 100)
				{
				_putchar((pr / 100) + 0);
				_putchar((pr / 10) % 10 + 0);
				}
				else if (pr <= 99 && pr >= 10)
				_putchar((pr / 10) + 0);
				_putchar((pr % 10) + 0);

			}
			_putchar('\n');
		}
	}
}

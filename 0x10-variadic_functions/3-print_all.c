#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int y = 0;
	char *c, *s = "";

	va_list valist;

	va_start(valist, format);

	if (format)
	{
		while (format[y])
		{
			switch (format[y])
			{
				case 'c':
					printf("%s%c", s, va_arg(valist, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(valist, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(valist, double));
					break;
				case 's':
					c = va_arg(valist, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", s, c);
					break;
				default:
					y++;
					continue;
			}
			s = ", ";
			y++;
		}
	}

	printf("\n");
	va_end(valist);
}

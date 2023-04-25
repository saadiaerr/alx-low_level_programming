#include "main.h"
/**
  * _isalpha - function that checks for alphabetic character
  * Return: 1 if c is a letter, 0 otherwise
  */
int _isalpha(int c)
{
	int c;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchart('\n');
}

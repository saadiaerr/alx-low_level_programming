#include "main.h"
/**
  * _strlen -  function that returns the length of a string
  * @s: string
  * Return: lentgh of string
  */

int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *s != '\0'; s++)
		++cnt;
	return (cnt);

}

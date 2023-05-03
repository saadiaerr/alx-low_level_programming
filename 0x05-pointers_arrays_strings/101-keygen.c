#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
  * main - program that generates random valid passwords for the program
  * Return: 0
  */
int main(void)
{
	int desiredNumber;
	char alph;

	srand(time(0));

	while (desiredNumber <= 2645)
	{
		alph = rand() % 128;
		desiredNumber += alph;
		putchar(alph);
	}
	putchar(2772 - desiredNumber);
	return (0);
}

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

	srand(time(NULL));

	while (desiredNumber <= 5678)
	{
		alph = rand() % 128;
		desiredNumber += alph;
		putchar(alph);
	}
	putchar(2772 - desiredNumber);
	return (0);
}

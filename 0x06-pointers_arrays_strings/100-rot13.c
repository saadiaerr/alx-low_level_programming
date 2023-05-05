#include "main.h"
/**
  * rot13 - function that encodes a string using rot13
  * @st: pointer to string
  * Return: string
  */
char *rot13(char *st)
{
	int i;
	int j;
	char root13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; st[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (st[i] == root13[j])
			{
				st[i] = datarot[j];
				break;
			}
		}
	}
	return (st);

}

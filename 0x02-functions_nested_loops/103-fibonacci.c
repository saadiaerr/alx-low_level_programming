#include "main.h"
/**
  *main -finds and prints the sum of the even-valued terms
  * Return: 0
  */
int main(void)
{
	int i;
	unsigned long grp1 = 1, grp2 = 2, sum = 0, next;

	for (i = 1; i <= 33; i++)
	{
		if (grp1 < 4000000 && (grp1 % 2) == 0)
		{
			sum = sum + grp1;
		}
		next = grp1 + grp2;
		grp1 = grp2;
	}
	printf("%lu\n", sum);
	return (0);
}

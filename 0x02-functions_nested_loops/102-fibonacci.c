#include "main.h"
/**
  * main -prints the first 50 Fibonacci numbers, starting with 1 and 2
  * Return: 0
  */
int main(void)
{
	int cnt;
	unsigned long grp1 = 0, grp2 = 1, tot;

	for (cnt = 0; cnt < 50; cnt++)
	{
		tot = grp1 + grp2;
		printf("%lu", tot);
		grp1 = grp2;
		grp2 = tot;
		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

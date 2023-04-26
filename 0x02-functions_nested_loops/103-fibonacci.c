#include "main.h"
/**
  *main -finds and prints the sum of the even-valued terms
  * Return: 0
  */
int main(void)
{
	unsigned long grp1 = 0, grp2 = 1, sum;
	float tot_sum;

	while (1)
	{
		sum = grp1 + grp2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
		tot_sum += sum;
		grp1 = grp2;
		grp2 = sum;
	}
	printf("%lu\n", sum);
	return (0);
}

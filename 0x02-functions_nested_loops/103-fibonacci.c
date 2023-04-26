#include "main.h"
/**
  *main -finds and prints the sum of the even-valued terms
  * Return: 0
  */
int main(void)
{
	int i = 0;
	unsigned long j = 1, k = 2, sum = 0;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)

			sum += k;
		j = k - j;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}

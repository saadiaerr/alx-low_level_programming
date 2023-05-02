#include "main.h"
/**
  * swap_int - function that swaps the values of two integers
  * @a: int to check number 1
  * @b: int to check number 2
  */
void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : first integer to be swapped with the other
 * @b : second integer to be swapped with the other
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: the array of numbers to be reversed
 * @n: the number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int ind;
	int rind;
	int c;

	ind = 0;

	rind = n - 1;

	while (!(ind >= rind))
	{
		c = a[ind];
		a[ind] = a[rind];
		a[rind] = c;
		ind++;
		rind--;
	}


}

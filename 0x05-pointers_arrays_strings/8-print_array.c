#include "main.h"
#include <stdio.h>
/**
 * print_array- Prints an array of numbers with n members
 * @a: array to be printed
 * @n: number of items in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		} else
		{
			printf("%d", a[i]);
			printf("%s", ", ");
		}
	}
	printf("%c", '\n');
}

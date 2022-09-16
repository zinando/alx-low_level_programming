#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - outputs random number based on time and outputs its sign
 *
 * Return: returns 0
 */
int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

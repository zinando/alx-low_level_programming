#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point. Prints the  sum of positive numbers
 * passed as arguments
 * or Prints Error if any of the argument is a symbol other than a digit
 *
 * @argc: number of command line args
 * @argv: array of command ine args
 *
 * Return: Success 0 or Error 1
 */
int main(int argc, char *argv[])
{
	unsigned int total = 0;

	unsigned int num;
	int i;
	int c;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
														return (1);
			}
		num = atoi(argv[i]);
		total += num;
	}
	printf("%d\n", total);
	return (0);
}

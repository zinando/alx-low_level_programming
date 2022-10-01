#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point. Prints the product of two numbers
 * passed as arguments
 * or Prints Error if two arguments were not provided
 *
 * @argc: number of command line args
 * @argv: array of command ine args
 *
 * Return: Success 0 or Error 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{	int i;
		int j;
		int sum;

		i = atoi(argv[argc - 1]);
		j = atoi(argv[argc - 2]);
		sum = i * j;

		printf("%d\n", sum);

		return (0);
	}
	printf("Error\n");

	return (1);
}

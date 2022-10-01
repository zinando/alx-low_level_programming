#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point. Prints all args passed into it
 * @argc: number of command line args
 * @argv: array of command ine args
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

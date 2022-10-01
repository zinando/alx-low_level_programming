#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point to our program
 * @argc: number of command line args
 * @argv: array of command ine args
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * description - function that prints the value of a variabl
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x % 10 + '0');
		putchar('\,');
		putchar('\ ');
	}
	putchar('\n');
	return (0);
}

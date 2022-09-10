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
		if (x == 9)
		{
			putchar(x % 10 + '0');
		} else
		{
			putchar(x % 10 + '0');
			putchar(44);
			putchar(040);
		}
	}
	return (0);
}

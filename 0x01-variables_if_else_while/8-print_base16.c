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
	char ch;

	for (x = 0; x < 10; x++)
	{
		putchar(x % 10 + '0');
	}
	for (x = 97; x < 103; x++)
	{
		ch = x;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

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

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			ch = x;
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

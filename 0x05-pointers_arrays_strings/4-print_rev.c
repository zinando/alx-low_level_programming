#include "main.h"
/**
 * print_rev - prints a string to standard output in reverse form
 * @s : the string variable to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	x = c - 1;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

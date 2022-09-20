#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str : the string variable to be printed
 */
void _puts(char *str)
{
	int c = 0;
	int x = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	while (x < c)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

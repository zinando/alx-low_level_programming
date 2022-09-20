#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : the string variable to be printed
 */
void puts_half(char *str)
{
	int x;
	int c;
	int n;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		n = c / 2;

		for (x = n; x < c; x++)
		{
			_putchar(str[x]);
		}
	} else
	{
		n = (c - 1) / 2;

		for (x = c - n; x < c; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - prints every other char in a string starting with the first
 * @str : the string variable to be printed
 */
void puts2(char *str)
{
	int x;
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (x = 0; x < c; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}

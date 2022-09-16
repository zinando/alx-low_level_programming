#include "main.h"
/**
 * print_line- Prints a straing line
 * @n: lenght of the line to be drawn
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n ; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}

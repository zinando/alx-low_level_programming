#include "main.h"
/**
 * print_most_numbers- Prints digit from 0..9 except 2&4
 * Return: 0
 */
void print_most_numbers(void)
{
	char ch;

	ch = 48;
	do {
		if (ch != 52 && ch != 50)
		{
			_putchar(ch);
		}
		ch++;
	} while (ch < 58);
		_putchar('\n');
}

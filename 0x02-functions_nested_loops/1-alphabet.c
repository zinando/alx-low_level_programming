#include "main.h"
/**
 * print_alphabet - writes the alphabets to std output
 */
void print_alphabet(void)
{
		int x = 0;
		char y[] = "abcdefghijklmnopqrstuvwxyz";

		while (x < 26)
		{
			_putchar(y[x]);
			x += 1;
		}
		_putchar('\n');
}

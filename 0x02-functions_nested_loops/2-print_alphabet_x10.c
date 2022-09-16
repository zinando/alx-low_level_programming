#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets to std output
 */
void print_alphabet_x10(void)
{
		int x = 0;
		int z = 0;
		char y[] = "abcdefghijklmnopqrstuvwxyz";

		while (x < 10)
		{
			z = 0;

			while (z < 26)
			{
				_putchar(y[z]);
				z += 1;
			}
			_putchar('\n');
			x += 1;
		}

}

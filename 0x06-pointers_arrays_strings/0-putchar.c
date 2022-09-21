#include "main.h"

/**
 * main - entry point
 *
 * Description - This function prints _putchar on the std output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	char y[] = "_putchar";

	while (x < 8)
	{
		_putchar(y[x]);
		x += 1;
	}
	_putchar('\n');
	return (0);
}

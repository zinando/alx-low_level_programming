#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}

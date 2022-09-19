#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s : the variable whose lenght is to be determined
 *
 * Return: the lenght of the input param
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

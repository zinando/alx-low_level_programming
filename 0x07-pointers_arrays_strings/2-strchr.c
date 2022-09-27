#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string in which the chr is to be located
 * @c: the chr to be located
 *
 * Return: pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int x;
	int i;

	x = 0;

	for (x = 0; s[x]; x++)
		continue;

	for (i = 0; i <= x; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

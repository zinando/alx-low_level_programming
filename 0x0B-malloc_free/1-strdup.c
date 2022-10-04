#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		continue;

	p = malloc(x + 1);

	if (p == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		p[y] = str[y];

	return (p);
}

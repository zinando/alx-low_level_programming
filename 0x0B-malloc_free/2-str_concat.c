#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the new string memory location
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, x, y, z;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	for (x = 0; s1[x]; x++)
		continue;
	for (y = 0; s2[y]; y++)
		continue;
	z = x + y;

	p = malloc(z + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		p[i] = s1[i];

	for (j = 0; j < y; j++)
	{
		p[x + j] = s2[j];
	}
	p[x + j + 1] = '\0';

	return (p);
}

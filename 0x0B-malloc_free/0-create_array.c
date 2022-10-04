#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars and
 * initializes it with a char
 *
 * @size: reference size of array to be created
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (!size || size == 0)
		return (NULL);
	p = malloc(size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		p[x] = c;

	return (p);

}

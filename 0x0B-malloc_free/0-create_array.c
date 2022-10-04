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
	if (size && size > 0)
	{
		char *p;

		p = malloc(size + 1);
		p[0] = c;

		return (p);
	}
	return (NULL);

}

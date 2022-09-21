#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string with n chars pointed to by a
 * pointer to a buffer pointed to by another pointer
 *
 * @dest: the destination pointer
 * @src: the source pointer
 * @n: the max number of chars to be copied
 *
 * Return: destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

#include "main.h"
#include <string.h>
/**
 * _strncat - appends the src string of n chars to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte
 *
 * @dest: the destination pointer
 * @src: the source pointer
 * @n: max number of characters from src that can be appended to dest
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

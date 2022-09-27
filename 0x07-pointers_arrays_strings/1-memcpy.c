#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: a memory area to be coppied
 * @dest: the destination area of the memory to copy src to
 * @n: the number of bytes to copy in the memory area
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*dest = *(src + x);
		x++;
		dest++;
	}
	return (dest);
}

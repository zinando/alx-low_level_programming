#include <stdio.h>
/**
 * Main - entry point
 *
 * Description - This function prints _putchar on the std output
 *
 * Return : Always 0 (Success)
 */
int main (void)
{
	char d[] = {'_','p','u','t','c','h','a','r','\0'};

	int x = 0;

	while (x < 8 )
	{
		putchar(d[x]);
		x++;
	}
	putchar('\n');
	return (0);
}

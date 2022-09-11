#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * description - function that prints the value of a variabl
 *
 * Return: Always 0 (Success)
 */
int main() {
	
	int x;
	int y;
	int z;
	for (x= '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
			if (x != y && x != z && y != z && x < y && y < z)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

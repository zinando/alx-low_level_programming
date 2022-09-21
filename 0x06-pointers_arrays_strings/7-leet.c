#include "main.h"
#include <ctype.h>
/**
 * leet - encode a string into 1337
 * @str: the string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char *set1 = "aeotlAEOTL";
	char *set2 = "4307143071";

	int i, s;

	for (i = 0; str[i]; i++)
	{
		for (s = 0; set1[s]; s++)
		{
			if (set1[s] == str[i])
			{
				str[i] = set2[s];
				break;
			}
		}
	}
	return (str);
}

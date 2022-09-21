#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @a: the string whose chars are to be modified
 *
 * Return: pointer to the string
 */
char *string_toupper(char *a)
{
	int rind;

	char s[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*a != '\0')
	{
		if (*a >= 97 && *a <= 122)
		{
			rind = 0;

			while (s[rind] != '\0')
			{
				if (*a - s[rind] == 32)
					*a = s[rind];
				rind++;
			}
		}
		a++;
	}
	return (a);
}

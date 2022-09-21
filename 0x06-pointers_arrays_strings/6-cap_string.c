#include "main.h"
/**
 * cap_string -  capitalize all words in a string
 * @a: the string whose chars are to be modified
 *
 * Return: pointer to the string
 */
char *cap_string(char *a)
{
	int rind;
	int ind;

	char s[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	ind = 1;

	while (s[rind] != '\0')
	{
		if (*a - s[rind] == 32)
		{
			*a = s[rind];
			rind++;
		}
	}
	a++;

	while (*a != '\0')
	{
		if (a[ind] == '\n' || a[ind] == '{' || a[ind] == '}' || a[ind] == '.')
		{
			rind = 0;

			while (s[rind] != '\0')
			{
				if (a[ind + 1] - s[rind] == 32)
					a[ind + 1] = s[rind];
				rind++;
			}
		}
		else if (a[ind] == ';' || a[ind] == ',' || a[ind] == ' ' || a[ind] == '\t')
		{
			rind = 0;

			while (s[rind] != '\0')
			{
				if (a[ind + 1] - s[rind] == 32)
					a[ind + 1] = s[rind];
				rind++;
			}
		}
		else if (a[ind] == '(' || a[ind] == ')' || a[ind] == '\"' || a[ind] == '!')
		{
			rind = 0;

			while (s[rind] != '\0')
			{
				if (a[ind + 1] - s[rind] == 32)
					a[ind + 1] = s[rind];
				rind++;
			}
		}
		else if (a[ind] == '?')
		{
			rind = 0;

			while (s[rind] != '\0')
			{
				if (a[ind + 1] - s[rind] == 32)
					a[ind + 1] = s[rind];
				rind++;
			}
		}
		a++;
	}
	return (a);
}

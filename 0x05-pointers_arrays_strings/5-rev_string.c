#include "main.h"
/**
 * rev_string - reverses a string
 * @s : the string variable to be printed
 */
void rev_string(char *s)
{
	int ind;
	int rind;
	char c;
	int len;

	ind = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	rind = len - 1;

	while (!(ind >= rind))
	{
		c = s[ind];
		s[ind] = s[rind];
		s[rind] = c;
		ind++;
		rind--;
	}


}

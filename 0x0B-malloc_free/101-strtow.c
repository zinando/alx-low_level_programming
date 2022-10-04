#include "main.h"
/**
 * _isspace - checks if a char is a whitespace
 * @c: a char
 * Return: 1 if it is a whitespac, else 0
 */
int _isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

/**
 * nextword - skip all spaces and jump to the start of the next word
 * @str: a string
 * Return: a pointer to the beginning of the next word
 */
char *nextword(char *str)
{
	if (!_isspace(*str))
		return (str);
	return (nextword(str + 1));
}

/**
 * countchars - count the character in the first word of a string
 * @str: a string
 * Return: the length of the word
 */
unsigned int countchars(char *str)
{
	if (_isspace(*str) || !*str)
		return (0);
	return (1 + countchars(str + 1));
}

/**
 * countwords - count how wany words are in a string
 * @str: a string
 * Return: the number of words in the string
 */
unsigned int countwords(char *str)
{
	char *s = str;
	unsigned int wc = 0;
	char state = 0;

	while (*s)
	{
		if (_isspace(*s))
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wc;
		}
		++s;
	}
	return (wc);
}

/**
 * strtow - split a string into words
 * @str: a string
 * Return: an array of words found in the string
 */
char **strtow(char *str)
{
	char **words;
	char *word;
	unsigned int w, i, c, length, wc;

	if (str == NULL || !*str)
		return (NULL);
	word = nextword(str);
	wc = countwords(word);
	words = (char **)malloc((wc + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (w = 0; w < wc; w++)
	{
		length = countchars(word);
		words[w] = (char *)malloc(sizeof(char) * length + 1);

		if (words[w] == NULL)
		{
			for (i = 0; i < w; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (c = 0; c < length; c++)
			words[w][c] = word[c];

		words[w][c] = '\0';
		word = nextword(word + length);
	}
	words[w] = NULL;
	return (words);
}

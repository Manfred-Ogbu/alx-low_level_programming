#include "main.h"

/**
 * is_separator - check if a char is a seperator.
 * @s: the char to test.
 *
 * Return: 1 if seperator is found else 0
 */
int is_separator(char s)
{
	char separator[] = {'\t', '\n', ' ', ',', ';', '!',
				'.', '?', '\"', '(', ')', '{', '}'};
	int j = 0;

	while (separator[j] != '\0')
	{
		if (s == separator[j])
		{
			return (1);
			j++;
		}
	}
	return (0);
}

/**
 * cap_string - This fxn will capitalize all words in a string.
 * @s: sring to be processed.
 *
 * Return: pointer to the modified string.
 */
char *cap_string(char *s)
{
	int w, j;

	w = 1;
	j = 0;
	while (s[j] != '\0')
	{
		if (w == 1 && (s[j] >= 'a' && s[j] <= 'z'))
		{
			s[j] -= 32;
			w = 0;
		}
		w = is_separator(s[j]);
		j++;
	}
	return (s);
}


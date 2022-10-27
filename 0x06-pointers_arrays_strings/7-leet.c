#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @str: string to make 1337
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int p = 0;
	int v;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[p])
	{
		for (v = 0 ; v <= 7 ; v++)
		{
			if (str[p] == leet[v] || str[p] - 32 == leet[v])
				str[p] = v + '0';
		}
		p++;
	}
	return (str);
}


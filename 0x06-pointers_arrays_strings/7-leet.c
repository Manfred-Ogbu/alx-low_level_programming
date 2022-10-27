#include "main.h"

/**
 * leet - breaking out the leet speak.
 * @s: string to make 1337
 *
 * Return: a point the s
 */
char *leet(char *s)
{
	char lt[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int y = 0;
	int u = 0;

	while (s[y] != '\0')
	{
		while (lt[u][0] != '\0')
		{
			if (s[y] == lt[u][0])
			{
				s[y] = lt[u][1];
				u++;
			}
		}
		u = 0;
		y++;
	}
	return (s);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - fxn  concatenates all the arguments.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, z, w;

	if (ac == 0 || av == NULL)
		return (NULL);
	w = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; z++)
		{
			w++;
		}
		w += 1;
	}
	str = malloc(sizeof(char) * w + 1);
	w = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; ++z)
		{
			str[w] = temp[z];
			w++;
		}
		str[w] = '\n';
		w++;
	}
	str[w] = '\0';
	return (str);
}


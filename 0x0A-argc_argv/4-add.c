#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point, add positive numbers.
 * @argc: count arguments passed in argv
 * @argv: String for passed Arguments.
 *
 * Return: 0 (Sucess) else 1 (Failure).
 */
int main(int argc, char *argv[])
{
	int k, c, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1 ; k < argc ; k++)
	{
		for (c = 0; argv[k][c] != '\0'; c++)
		{
			if (!isdigit(argv[k][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}

	printf("%d\n", sum);
	return (0);
}


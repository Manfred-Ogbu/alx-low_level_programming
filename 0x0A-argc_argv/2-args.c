#include <stdio.h>

/**
 * main - Entry point
 * @argc: count.
 * @argv: string with the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0 ; n < argc ; n++)
		printf("%s\n", argv[n]);

	return (0);
}


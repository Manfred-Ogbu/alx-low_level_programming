#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds the product of two numbers
 * @argc: counts the arguments.
 * @argv: string array for the arguments
 *
 * Return: 0 (Success) else 1 (Failure).
 */
int main(int argc, char *argv[])
{
	int n;
	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (n = 1 ; n < argc ; n++)
	{
		sum *= atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}


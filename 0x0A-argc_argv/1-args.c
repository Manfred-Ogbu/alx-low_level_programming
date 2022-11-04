#include <stdio.h>

/**
 * main - Entry point.
 * @argc: count
 * @argv: argument
 *
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
		return (argc - 1);
}


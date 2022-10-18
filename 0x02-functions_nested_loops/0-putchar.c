#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *m = "_putchar\n";

	while (*m)
	{
		_putchar(*m);
		m++;
	}
	return (0);
}


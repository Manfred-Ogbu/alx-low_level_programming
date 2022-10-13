#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program to display the sizes of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long: %i byte(s)\n", sizeof(long long));
	printf("Size of an float: %i byte(s)\n", sizeof(float));
	return (0);
}

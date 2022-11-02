#include <stdio.h>

int wildcmp(char *s1, char *s2);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
int *postfix_match(char *str, char *postfix);

/**
 * strlen_no_wilds - Returens the length of string
 * also ignoring wildcard xters
 * @str: The string to act on
 *
 * Return: The length
 */
int strlen_no_wilds(char *str)
{
	int len = 0;
	int index = 0;
}

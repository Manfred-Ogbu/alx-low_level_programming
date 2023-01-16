#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @b: test for alphabetic characters
 * Return: returns 1 for true and 0 for false
 */
int _isalpha(int b)
{
	return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}


/**
 * _strspn - fxn  calculates  the  length (in bytes)
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search
 *
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int k;

	while (*s)
	{
		for (k = 0 ; accept[k] ; k++)
		{
			if (*s == accept[k])
			{
				bytes++;
				break;
			}

			else if (accept[k + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}


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
	unsigned int i, z, count, j;

	i = 0;
	z = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		z = 0;
		j = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				j = 1;
				break;
			}
			z++;
		}

		if (j == 0)
		{
			return (count);
			i++;
		}
	}
	return (count);
}


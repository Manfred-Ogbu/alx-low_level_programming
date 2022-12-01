/**
 * flip_bits - fxn that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0;
	unsigned long int j;

	j = n ^ m;

	while (j)
	{
		k += j & 1;
		j >>= 1;
	}

	return (k);
}


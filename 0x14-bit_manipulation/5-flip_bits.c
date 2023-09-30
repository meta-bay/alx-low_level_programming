#include "main.h"

/**
 * flip_bits - Flips the bits.
 * @n: Target number.
 * @m: Target to this one
 *
 * Return: necessary flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

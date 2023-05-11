#include "main.h"

/**
 * flip_bits - will return the number of bits you would need to flip to get from
 * one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = n ^ m;
	unsigned int plus = 0;

	while (p > 0)
	{
		plus += p & 1;
		p >>= 1;
	}

	return (plus);
}

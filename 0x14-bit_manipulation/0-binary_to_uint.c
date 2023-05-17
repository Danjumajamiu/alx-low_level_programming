#include "main.h"

/**
 * binary_to_uint - will convert a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number, or 0 if there is an invalid char or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binnum = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		binnum = (binnum << 1) + (*b++ - '0');
	}
	return (binnum);
}
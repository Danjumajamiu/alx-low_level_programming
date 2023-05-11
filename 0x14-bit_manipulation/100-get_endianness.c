#include "main.h"

/**
 * get_endianness - will check the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *n  = (char *)&v;

	if (*n)
		return (1);
	else
		return (0);
}

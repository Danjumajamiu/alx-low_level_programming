#include "main.h"

/**
 * _memset - Will populate memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		s[a] = b;
	return (s);
}


#include "main.h"

/**
 * _strncat - will concatenate the n characterss @src to @dest
 * @src: source string to append to @dest
 * @dest: destiation string to be concatenated upon
 * @n: number of characters
 * Return:pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_lent, u;

	dest_lent = 0;
	u = 0;
	while (dest[dest_lent])
		dest_lent++;
	while (src[u] && u < n)
	{
		dest[dest_lent + u] = src[u];
		u++;
	}
	return (dest);
}


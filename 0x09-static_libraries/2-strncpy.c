#include "main.h"

/**
 *_strncpy - will copy the n characterss @src to @dest
 * @src: source string to append to @dest
 * @dest: destiation string to be concatenated upon
 * @n: number of characters
 * Return:pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (src[b] && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}

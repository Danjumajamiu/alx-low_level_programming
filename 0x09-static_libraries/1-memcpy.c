#include "main.h"

/**
 * _memcpy - will copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

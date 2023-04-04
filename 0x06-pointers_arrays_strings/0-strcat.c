#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: source string to append to @dest
 * @dest: destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dest_lent, a;

	dest_lent = 0;
	while (dest[dest_lent])
		dest_lent++;
	for (a = 0; src[a] ; a++)
		dest[dest_lent + a] = src[a];
	return (dest);
}


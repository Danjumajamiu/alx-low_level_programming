#include <stdlib.h>

/**
 * string_nconcat - will concatenate two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *append;
	unsigned int lent = a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (b = 0; s1[b]; b++)
		lent++;
	append = malloc(sizeof(char) * (lent + 1));
	if (append == NULL)
		return (NULL);
	lent = 0;
	for (b = 0; s1[b]; b++)
		append[lent++] = s1[b];
	for (b = 0; s2[b] && b < a; b++)
		append[lent++] = s2[b];
	append[lent] = '\0';
	return (append);
}

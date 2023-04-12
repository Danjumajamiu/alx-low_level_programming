#include "main.h"
#include <stdlib.h>

/**
 * str_concat - will concatenate a given two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2, w;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (w = 0; s1[w]; w++)
		len1++;
	for (w = 0; s2[w]; w++)
		len2++;
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);
	for (w = 0; s1[w]; w++)
		concat_str[w] = s1[w];

	for (w = 0; s2[w]; w++)
		concat_str[len1 + w] = s2[w];

	concat_str[len1 + len2] = '\0';
	return (concat_str);
}

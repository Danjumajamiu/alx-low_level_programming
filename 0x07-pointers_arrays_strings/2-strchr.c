#include "main.h"

/**
 * _strchr - detects a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int t = 0;

	for (t = 0; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	return ('\0');
}

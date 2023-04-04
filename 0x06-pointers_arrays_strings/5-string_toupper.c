#include "main.h"

/**
 * string_toupper - will convert lowercase to uppercase
 * @str: string to be converted
 * Return: char * of the string in upper case
 */

char *string_toupper(char *str)
{
	int b;

	b = 0;
	while (str[b])
	{
		if (str[b] >= 'a' && str[b] <= 'z')
			str[b] = str[b] - ('a' - 'A');
		b++;
	}
	return (str);
}

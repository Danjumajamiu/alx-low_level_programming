#include "main.h"

/**
 * cap_string - will capitalize all words of a string.
 * @str: string to be capatalized.
 * Return: char * of the string after capitalization.
 */

char *cap_string(char *str)
{
	int b, check;

	b = 0;
	check = 1;
	while (str[b])
	{
		if (str[b] == ' ' || str[b] == '\t' || str[b] == '\n')
			check = 1;
		else if (str[b] == ',' || str[b] == ';' || str[b] == '.')
			check = 1;
		else if (str[b] == '!' || str[b] == '?' || str[b] == '(')
			check = 1;
		else if (str[b] == ')' || str[b] == '{' || str[b] == '}')
			check = 1;
		else if (check)
		{
			if (str[b] >= 'a' && str[b] <= 'z')
				str[b] = str[b] - ('a' - 'A');
			check = 0;
		}
		else
			check = 0;
		b++;
	}
	return (str);
}

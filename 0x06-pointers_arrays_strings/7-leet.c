#include "main.h"

/**
 * leet - encode string in 1337
 * @str: string to be encoded
 * Return: char * of the string encoding.
 */

char *leet(char *str)
{
	int a = 0;

	int b = 0;

	char from_array[] = {'a', 'e', 'o', 't', 'l'};

	char to_array[] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		for (b = 0; b < 5; b++)
		{
			if (str[a] == from_array[b] || str[a] == from_array[b] - 32)
				str[a] = to_array[b];
		}
		a++;
	}
	return (str);
}

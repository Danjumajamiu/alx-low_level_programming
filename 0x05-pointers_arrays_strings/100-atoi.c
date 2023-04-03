#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int q = 0;
	unsigned int in = 0;
	int min = 1;
	int is = 0;

	while (s[q])
	{
		if (s[q] == 45)
		{
			min *= -1;
		}

		while (s[q] >= 48 && s[q] <= 57)
		{
			is = 1;
			in = (in * 10) + (s[q] - '0');
			q++;
		}

		if (is == 1)
		{
			break;
		}

		q++;
	}

	in *= min;
	return (in);
}

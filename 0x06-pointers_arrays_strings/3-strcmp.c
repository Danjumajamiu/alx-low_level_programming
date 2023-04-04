#include "main.h"

/**
 * _strcmp - compares @s1 to @s2
 * @s1: 1st string
 * @s2: 2nd string
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int a, different;

	a = 0;
	different = 0;
	while (s1[a] && s2[a])
	{
		if (s1[a] == s2[a])
			a++;
		else
		{
			different = s1[a] - s2[a];
			break;
		}
	}
	return (different);
}

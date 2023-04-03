#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; i >= 0 && j < k; k--, j++)
	{
		a = s[k];
		s[j] = s[k];
		s[k] = a;
	}
}

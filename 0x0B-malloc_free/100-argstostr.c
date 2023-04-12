#include "main.h"
#include <stdlib.h>

/**
 * argstostr - will concatenate all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: if av is NULL or ac equates to 0 - NULL
 *	pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *store;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	store = malloc((a + 1) * sizeof(char));

	if (store == NULL)
	{
		free(store);
		return (NULL);
	}

	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			store[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			store[d] = av[b][c];
	}
	store[d] = '\0';

	return (store);
}

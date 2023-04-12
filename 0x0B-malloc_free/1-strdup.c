#include "main.h"
#include <stdlib.h>

/**
 * _strdup - will return a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *excess;
	unsigned int length, q;

	length = 0;
	if (str == NULL)
		return (NULL);
	for (q = 0; str[q] ; q++)
		length++;
	excess = malloc(sizeof(char) * (length + 1));
	if (excess == NULL)
		return (NULL);
	for (q = 0; q  < length; q++)
		excess[q] = str[q];
	excess[length] = '\0';
	return (excess);
}

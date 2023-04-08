#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - will print sum of all arguments
 * @argc: arguments count
 * @argv: Array name
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int x, y, len, sum;
	char *str;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
	str = argv[x];
	len = strlen(str);
	for (y = 0; y < len; y++)
	{
	if (isdigit(*(str + y)) == 0)
	{
		printf("Error\n");
		return (1);
	}
	}
	sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}

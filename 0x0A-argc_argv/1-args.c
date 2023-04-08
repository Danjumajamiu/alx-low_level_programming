#include "main.h"
#include <stdio.h>

/**
 * main - will print the number of arguments passed into it.
 * @argc: arguments count
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

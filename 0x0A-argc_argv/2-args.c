#include "main.h"
#include <stdio.h>

/**
 * main - will print all arguments it receives.
 * @argc: argument count
 * @argv: command name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
		printf("%s\n", argv[u]);
	return (0);
}

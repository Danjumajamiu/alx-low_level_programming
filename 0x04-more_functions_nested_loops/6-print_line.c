#include "main.h"

/**
 * print_line - prints the char _ for n times
 * @n: number of times to print the char  _
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

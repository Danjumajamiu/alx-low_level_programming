#include "main.h"

/**
 * print_diagonal - prints the char \ for n times
 * @n: number of times to print the char \
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (a = 0 ; a < n ; a++)
	{
		for (b = 0; b < a ; b++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

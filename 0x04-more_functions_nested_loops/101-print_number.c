#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int b;

	b = n;
	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	if (b / 10)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}

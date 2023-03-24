#include "main.h"

/**
 * print_triangle - displays a triangle of a size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < size ; i++)
	{
		for (j = size - 1; j >= 0 ; j--)
		{
		if (j > i)
		{
		_putchar(' ');
		}
		else
		{
		_putchar('#');
		}
		}
		_putchar('\n');
	}
}

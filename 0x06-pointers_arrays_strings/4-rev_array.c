#include "main.h"

/**
 * reverse_array - reverse given array
 * @a: given array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = tmp;
	}
}

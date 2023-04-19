#include "function_pointers.h"

/**
 * array_iterator - will execute a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array && action)
		for (p = 0; p < size; p++)
			action(array[p]);
}

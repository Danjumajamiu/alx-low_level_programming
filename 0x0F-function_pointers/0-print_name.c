#include "function_pointers.h"

/**
 * print_name - will print a name.
 * @name: the input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

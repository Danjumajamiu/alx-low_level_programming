#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - will print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nb;
	unsigned int new;

	va_start(nb, n);

	for (new = 0; new < n; new++)
	{
		printf("%d", va_arg(nb, int));

		if (new != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nb);
}

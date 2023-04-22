#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - will sum all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters otherwise
*/

int sum_them_all(const unsigned int n, ...)
{
va_list li;
int adding = 0;
unsigned int a;

va_start(li, n);

if (n != 0)
{
for (a = 0; a < n; a++)
adding += va_arg(li, int);
}

va_end(li);
return (adding);
}

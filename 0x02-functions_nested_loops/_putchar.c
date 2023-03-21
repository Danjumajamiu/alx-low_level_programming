#include <unistd.h>
#include "main.h"

/**
 *
 * _putchar - prints the string _putchar
 * 
 * Return: Success 1.
 * Error -1.
 */
int _putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}

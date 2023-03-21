#include "main.h"

/**
 * main - Displays _putchar as a message.
 *
 * Return: Value is 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int first, end;

	end = sizeof(str) / sizeof(int);
	for (first = 0; first < end; first++)
	{
		_putchar(str[first]);
	}
	_putchar('\n');
	return (0);
}
int _putchar (char _putchar);

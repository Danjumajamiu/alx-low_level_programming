#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int ri;

    ri = _islower('H');
    _putchar(ri + '0');
    ri = _islower('o');
    _putchar(ri + '0');
    ri = _islower(108);
    _putchar(ri + '0');
    _putchar('\n');
    return (0);
}

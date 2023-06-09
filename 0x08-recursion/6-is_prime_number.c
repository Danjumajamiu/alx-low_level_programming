#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @nb: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int is_divisible(int nb, int div)
{
	if (div == nb)
		return (1);
	if (nb % div == 0)
		return (0);
	return (is_divisible(nb, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (is_divisible(n, div));
}

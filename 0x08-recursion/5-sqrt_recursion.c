#include "main.h"

/**
 * mind_root - Finds the natural square root of a number entered.
 * @nb: The number to find the square root of.
 * @root: guess of root to be tested;
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int mind_root(int nb, int root)
{
	if ((root * root) == nb)
		return (root);
	if (root == nb)
		return (-1);
	return (mind_root(nb, root + 1));
}

/**
 * _sqrt_recursion - will Return the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (mind_root(n, root));
}

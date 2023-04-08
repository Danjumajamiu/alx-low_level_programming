# include "main.h"

/* main - will determine factorial of a given number
 * @n: number to be entered
 * Return: -1 if n less than 0
 *	0 if n is 0
 */
	int factorial(int n)
	{if (n<0)
	{return -1;}
	if (n==0)
	{return 1;}
	return n = n*factorial(n-1);}

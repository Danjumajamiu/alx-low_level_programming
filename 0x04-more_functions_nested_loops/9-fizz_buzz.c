#include <stdio.h>

/**
 * main - Fizz Buzz code
 *
 * Return: void
 */

int main(void)
{
	int i, detect;

	for (i = 1; i <= 100; i++)
	{
		detect = 1;

		if (i % 3 == 0)
		{
			printf("Fizz");
			detect = 0;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			detect = 0;
		}
		if (detect)
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - diplays all possible combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(j);
			putchar(i);
			if (i == 57 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

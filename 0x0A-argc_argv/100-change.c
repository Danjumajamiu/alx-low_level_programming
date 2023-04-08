#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - will print change in coins
 * @argc: arguments count
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coin, cent;

	coin = 0;
	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}

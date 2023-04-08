#include <stdio.h>
#include <stdlib.h>

/**
 * main - will print the multiplication of two numbers, followed by a new line.
 * @argc: arguments count to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program gets two arguments - 0.
 *         If the program does not get two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int nb1, nb2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	product = nb1 * nb2;

	printf("%d\n", product);

	return (0);
}

#include "3-calc.h"

/**
 * main - check the code user calc ops.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int o, p;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	ops = get_op_func(argv[2]);

	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	o = atoi(argv[1]);
	p = atoi(argv[3]);

	printf("%d\n", ops(o, p));
	return (0);
}

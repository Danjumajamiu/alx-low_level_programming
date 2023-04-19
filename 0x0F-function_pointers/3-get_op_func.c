#include "3-calc.h"

/**
 * get_op_func - will select the correct function to perform
 * the operation asked by the user.
 * @s: char operator.
 *
 * Return: pointer to the function that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int q = 0;

	while (q < 10)
	{
		if (s[0] == ops->op[q])
			break;
		q++;
	}

	return (ops[q / 2].f);
}

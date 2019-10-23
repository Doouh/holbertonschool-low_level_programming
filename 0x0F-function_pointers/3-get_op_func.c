#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - entry point
 * @s: char variable
 *
 * Return: 0
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s == ops[i].op)
			return (op_add(a, b));
		i++;
	}
	return (NULL);
}

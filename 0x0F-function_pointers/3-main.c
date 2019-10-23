#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: int variable
 * @av: char variable
 * Return: 0
*/

int main(int ac, char **av)
{
	char s;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = *av[2];
	if (s != 43 || s != 45 || s != 42 || s != 47 || s != 37)
	{
		printf("Error\n");
		exit(99);
	}
	if ((s == 47 && atoi(av[3]) == 0) || (s == 37 && atoi(av[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(av[2]))(atoi(av[1]), atoi(av[3])));

	return (0);
}

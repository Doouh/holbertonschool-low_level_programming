#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: int variable
 * @av: char variable
 *
 * Return: 0
*/

int main(int ac, char **av)
{
	char a;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}

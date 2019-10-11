#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int variable
 * @argv: char* variable
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n, c = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		while (n > 0)
		{
			if (n >= 25)
				n = n - 25;
			else if (n >= 10)
				n = n - 10;
			else if (n >= 5)
				n = n - 5;
			else if (n >= 2)
				n = n - 2;
			else if (n >= 1)
				n = n - 1;
			c++;
		}
		printf("%d\n", c);
	}

	return (0);
}

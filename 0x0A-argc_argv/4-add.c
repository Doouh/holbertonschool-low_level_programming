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
	int i, acu = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		while (*c)
		{
			if (*c < 47 || *c > 57)
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		acu = acu + atoi(argv[i]);
	}
	printf("%d\n", acu);

	return (0);
}

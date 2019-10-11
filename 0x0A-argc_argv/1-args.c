#include <stdio.h>

/**
 * main - Entry point
 * @argc: int variable
 * @argv: char* variable
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}

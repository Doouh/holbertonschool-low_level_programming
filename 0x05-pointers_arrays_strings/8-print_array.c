#include "holberton.h"
#include <stdio.h>

/**
* print_array - Entry point
* @a: int variable
* @n: int variable
*
* Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");
}

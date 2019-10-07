#include <stdio.h>

/**
* print_diagsums - Entry point
* @a: int variable
* @size: int variable
*
* Return: dest
*/

void print_diagsums(int *a, int size)
{
	int sump = 0, sums = 0, i, j, t = size - 1;

	for (i = 0; i < (size * size); i = i + t + 2)
		sump = sump + a[i];

	for (j = t; j < (size * size) - 1; j = j + t)
		sums = sums + a[j];

	printf("%d, %d\n", sump, sums);
}

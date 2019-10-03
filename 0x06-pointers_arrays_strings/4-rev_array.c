#include "holberton.h"

/**
* reverse_array - Entry point
* @a: int variable
* @n: int variable
*
*/

void reverse_array(int *a, int n)
{
	int i, aux, l;

	l = n - 1;
	n = n / 2;
	while (i <= n)
	{
		aux = a[l];
		a[l] = a[i];
		a[i] = aux;
		i++;
		l--;
	}
}

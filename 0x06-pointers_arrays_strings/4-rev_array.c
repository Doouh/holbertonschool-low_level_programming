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
	for (i = 0; i < n / 2; i++)
	{
		aux = a[l];
		a[l] = a[i];
		a[i] = aux;
		l--;
	}
}

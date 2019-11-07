#include "holberton.h"

/**
 * flip_bits - entry point
 * @n: usigned long int
 * @m: unsigned long int
 *
 * Return: unsigned int variable
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0, aux;

	aux = n ^ m;
	while (aux > 0)
	{
		if ((aux & 1) == 1)
			c++;
		aux = aux >> 1;
	}
	return (c);
}

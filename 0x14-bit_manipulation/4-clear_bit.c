#include "holberton.h"

/**
 * clear_bit - entry point
 * @n: unsigned long int variable
 * @idx: unsigned int variable
 *
 * Return: int variable
*/

int clear_bit(unsigned long int *n, unsigned int idx)
{
	if (idx > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << idx);
		return (1);
	}
}

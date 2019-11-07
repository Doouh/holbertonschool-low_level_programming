#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - entry point
 * @n: unsigned long int variable
 * @index: unsigned int variable
 * Return: int variable
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}

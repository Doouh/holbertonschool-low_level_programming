#include "holberton.h"

/**
 * get_bit - entry point
 * @n: unsigned long int variable
 * @index: unsigned int variable
 *
 * Return: int variable
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (sizeof(n) > 8)
		return (-1);
	if (n == 0 && index == 0)
		return (0);
	while (i < index)
	{
		n = n >> 1;
		if (n == 0)
			return (-1);
		i++;
	}

	return (n & 1);
}

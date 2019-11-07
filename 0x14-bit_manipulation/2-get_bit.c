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
	if (index > 64)
		return (-1);
	else
		return ((n >> index) & 1);
}

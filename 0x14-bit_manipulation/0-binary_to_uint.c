#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - entry point
 * @b: const char variable
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int acu = 0, pos = 2;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	i--;
	if (b[i] == 49)
		acu = 1;
	i--;
	while (i >= 0)
	{
		acu = acu + (pos * (b[i] - 48));
		i--;
		pos += pos;
	}
	return (acu);

}

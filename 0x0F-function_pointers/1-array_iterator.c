#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - entry point
 * @array: int variable
 * @size: size_t variable
 * @action: void variable
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}

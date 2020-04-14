#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located or -1 if the value is not
 * present in array or array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}

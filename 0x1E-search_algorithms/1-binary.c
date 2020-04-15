#include "search_algos.h"

/**
 * print_array - function that print an array
 * @array: array to print
 * @beg: index from where to start printing
 * @end: index how far to print
*/

void print_array(int *array, int beg, int end)
{
	printf("Searching in array: ");
	while (beg <= end)
	{
		printf("%d", array[beg]);
		if (beg != end)
			printf(", ");
		beg++;
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located or -1 if the value is not
 * present in array or array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	int middle, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);		
		middle = (left + right) / 2;
		if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}

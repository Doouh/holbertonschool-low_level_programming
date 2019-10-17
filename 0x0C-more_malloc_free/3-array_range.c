#include <stdlib.h>

/**
 * array_range - entry point
 * @min: int variable
 * @max: int variable
 *
 * Return: int variable
*/

int *array_range(int min, int max)
{
	int *a;
	int t = 0, i = 0;

	if (min > max)
		return (NULL);
	t = max - min + 1;
	a = malloc(sizeof(int) * t);
	if (!a)
		return (NULL);


	while (min != max)
	{
		a[i] = min;
		i++;
		min++;
	}
	a[i] = max;
	return (a);
}

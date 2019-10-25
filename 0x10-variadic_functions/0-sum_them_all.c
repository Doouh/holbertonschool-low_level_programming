#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @num: unsigned int variable
 * Return: int
*/

int sum_them_all(const unsigned int num, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (num == 0)
		return (0);

	va_start(valist, num);
	for (i = 0; i < num; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);

	return (sum);
}

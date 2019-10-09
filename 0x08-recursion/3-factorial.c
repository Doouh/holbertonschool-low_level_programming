#include "holberton.h"

/**
* factorial - Entry point
* @n: int variable
*
* Return: f
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * (n));
}

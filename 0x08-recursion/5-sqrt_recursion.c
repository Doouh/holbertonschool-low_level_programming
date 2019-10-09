#include "holberton.h"

/**
* _sqrt_recursion - Entry point
* @n: int variable
*
* Return: sq
*/

int rt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x < (n / 2))
		rt(n, x++);
	else
		return (-1);
	//if (x * x == n)
	//	return (x);
}

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
		
	return (rt(n, 2));
}

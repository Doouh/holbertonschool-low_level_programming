#include "holberton.h"

/**
* _pow_recursion - Entry point
* @x: int variable
* @y: int variable
*
* Return: p
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * (x));
}

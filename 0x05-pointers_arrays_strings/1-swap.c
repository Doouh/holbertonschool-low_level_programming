#include "holberton.h"

/**
* swap_int - Entry point
* @a: int variable
* @b: int variable
*
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

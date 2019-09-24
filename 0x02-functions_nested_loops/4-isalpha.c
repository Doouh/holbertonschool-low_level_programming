#include "holberton.h"

/**
* _isalpha - Entry point
*
* @c: int variable
* Return: 1 or 0
*/

int _isalpha(int c)
{
	int a = 0;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	}

	if (c >= 65 && c <= 90)
	{
		a = 1;
	}

	if (a == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

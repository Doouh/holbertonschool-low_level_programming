#include "holberton.h"

/**
* _print_rev_recursion - Entry point
* @s: char variable
*
*/

void _print_rev_recursion(char *s)
{
	if (s[1] != '\0')
	{
		s = s + 1;
		_print_rev_recursion(s--);
	}
	_putchar(s[0]);
}

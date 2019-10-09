#include "holberton.h"

/**
* _strlen_recursion - Entry point
* @s: char variable
*
* Return: int
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		s = s + 1;
		i++;
		i = i + _strlen_recursion(s);
	}

	return (i);
}

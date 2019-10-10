#include "holberton.h"
#include <stdio.h>

/**
 * kill - Entry point
 * @s1: char variable
 * @s2: char variable
 * @i: int variable
 *
 * Return: int
*/

int kill(char *s1, char *s2, int i)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
		return (kill(s1, s2 + 1, ++i));
	else if (*s1 != *s2 && i > 0)
	{
		if (!*s1)
			return (0);
		return (kill(s1 + 1, s2, i));
	}
	else if (*s1 == *s2 && i == 0)
		return (kill(s1 + 1, s2 + 1, 0));
	else if (*s1 == *s2 && i > 0)
	{
		if (!kill(s1 + 1, s2 + 1, 0))
			return (kill(s1 + 1, s2, i));
		return (kill(s1 + 1, s2 + 1, i));
	}
	else if (*s1 != *s2 && i == 0)
		return (0);
	return (-1);
}

/**
* wildcmp - Entry point
* @s1: char variable
* @s2: char variable
*
* Return: int
*/

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	return (kill(s1, s2, i));
}

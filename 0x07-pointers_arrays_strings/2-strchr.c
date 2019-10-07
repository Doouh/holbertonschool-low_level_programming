#include "holberton.h"

/**
* _strchr - Entry point
* @s: char variable
* @c: char variable
*
* Return: dest
*/

char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		if (!*s++)
			return (0);
	}
	return (s);
}

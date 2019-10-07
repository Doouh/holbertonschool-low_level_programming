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
	int i = 0;

	while (s[i] != c)
	{
		if (!*s++)
			return (0);
		else
			return (s);

		i++;
	}
	return (s);
}

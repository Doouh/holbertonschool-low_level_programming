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

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
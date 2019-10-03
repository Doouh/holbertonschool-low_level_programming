#include "holberton.h"

/**
* string_toupper - Entry point
* @s: char variable
* Return: s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}

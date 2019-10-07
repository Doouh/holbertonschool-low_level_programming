#include "holberton.h"

/**
* _strpbrk - Entry point
* @s: char variable
* @accept: char variable
*
* Return: dest
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s + i);
			}
			j++;
		}
		i++;
	}
	s = 0;
	return (s);
}

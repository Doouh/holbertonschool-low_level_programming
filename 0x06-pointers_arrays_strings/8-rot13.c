#include "holberton.h"

/**
* rot13 - Entry point
* @s: char variable
* Return: s
*/

char *rot13(char *s)
{
	int i = 0, j = 0;
	char *rM = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rm = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == rM[j])
				s[i] = rm[j];
			j++;
		}
		i++;
	}

	return (s);
}

#include "holberton.h"

/**
* rot13 - Entry point
* @s: char variable
* Return: s
*/

char *rot13(char *s)
{
	int i = 0, j = 0;
	char *ri = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ro = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ri[j])
			{
				s[i] = ro[j];
				break;
			}
		}
		i++;
	}

	return (s);
}

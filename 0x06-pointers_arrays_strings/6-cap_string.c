#include "holberton.h"

/**
* cap_string - Entry point
* @s: char variable
* Return: s
*/

char *cap_string(char *s)
{
	int i = 0, ban = 0;

	while (s[i])
	{
		if (s[i] == 9 || s[i] == '\n' || s[i] == 32 || s[i] == 44)
			ban = 1;
		if (s[i] == 59 || s[i] == 46 || s[i] == 33 || s[i] == 63)
			ban = 1;
		if (s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 123 || s[i] == 125)
			ban = 1;
		if (ban)
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		ban = 0;
		i++;
	}
	return (s);
}

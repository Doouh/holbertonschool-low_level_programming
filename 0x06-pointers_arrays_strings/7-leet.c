#include "holberton.h"

/**
 * to_int - Entry point
 * @c: char variable
 * Return: c
 */

char to_int(char c)
{
	if (c == 'a' || c == 'A')
		return ('4');
	else if (c == 'e' || c == 'E')
		return ('3');
	else if (c == 'o' || c == 'O')
		return ('0');
	else if (c == 't' || c == 'T')
		return ('7');
	else if (c == 'l' || c == 'L')
		return ('1');
	else
		return (c);
}

/**
* leet - Entry point
* @s: char variable
* Return: s
*/

char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = to_int(s[i]);
		i++;
	}

	return (s);
}

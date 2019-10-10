#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point
 * @s: char variable
 *
 * Return: int
*/

int kill(char *s1, char *s2, int ts1, int ts2, int i, int x)
{
	if ((s1[i] == s2[x] || s2[x] == '*') && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i + 1] == s2[x + 1] || s2[x] == '*')
		{
			if (s2[x + 1] == '*')
				x++;
			else
				if (s1[i + 1] == s2[x + 1])
				{
					x++;
					i++;
				}
				else
					i++;
			printf("s1[%d]: %c, s2[%d]: %c\n", i, s1[i], x,s2[x]);
			kill(s1, s2, ts1, ts2, i, x);
		}
		//else if (s2[x + 1] == '*')

	}
	return (0);
		
}

/**
 * _strlen_recursion - Entry point
 * @s: char variable
 *
 * Return: int
*/

int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
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
	int t1, t2, x = 0, i = 0;
	
	t1 = _strlen(s1);
	t2 = _strlen(s2);
	printf("s1: %d, s2: %d\n", t1, t2);
	return (kill(s1, s2, t1, t2, i, x));
}

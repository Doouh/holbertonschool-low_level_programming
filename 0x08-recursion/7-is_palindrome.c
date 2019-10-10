#include "holberton.h"

/**
* _strlen - int function
*
* @s: char variable
*
* Return: i
*/

int _strlen(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		s = s + 1;
		i++;
		i = i + _strlen(s);
	}
	return (i);
}

/**
 * ipi - Entry point
 * @s: char variable
 * @t: int variable
 * @i: int variable
 *
 * Return: t
*/


int ipi(char *s, int t, int i)
{
	if (s[i] != s[t])
		return (0);
	if (i != t - 2)
	{
		t--;
		i++;
		t = ipi(s, t, i);
	}
	else
		return (1);
	return (t);
}

/**
 * ipp - Entry point
 * @s: char variable
 * @t: int variable
 * @i: int variable
 *
 * Return: t
*/

int ipp(char *s, int t, int i)
{
	if (s[i] != s[t])
		return (0);
	if (i != t - 1)
	{
		t--;
		i++;
		t = ipp(s, t, i);
	}
	else
		return (1);
	return (t);
}

/**
 * is_palindrome - Entry point
 * @s: char variable
 *
 * Return: r
*/


int is_palindrome(char *s)
{
	int t, r;

	if (s[0] == '\0')
		return (1);
	t = _strlen(s);
	if (t % 2 != 0)
		r = ipi(s, t - 1, 0);
	else
		r = ipp(s, t - 1, 0);
	return (r);
}

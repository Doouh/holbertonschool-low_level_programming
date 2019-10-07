#include "holberton.h"

/**
* _strspn - Entry point
* @s: char variable
* @accept: char variable
*
* Return: dest
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int conti = 0, contf = 0;
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				contf++;
			j++;
		}
		if (contf == conti)
		{
			return (contf);
		}
		else
			conti = contf;
		i++;
	}
	return (contf);
}

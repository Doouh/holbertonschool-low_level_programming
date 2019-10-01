#include "holberton.h"
#include <stdio.h>

/**
* _atoi - Entry point
* @s: int variable
*
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{
	int i = 0, sg = 1, b1 = 0, pi, pf, b2 = 0, b3 = 0, lon, p, j, v = 0;

	if (s[0] == '\n')
		return (0);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-' && b1 == 0)
			sg = sg * -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (b3 == 0)
			{
				b1 = 1;
				if (b2 == 0)
					pi = i;
				b2 = 1;
			}
		}
		else if (b2 == 1)
		{
			b3 = 1;
			pf = i - 1;
			break;
		}
		if (b2 == 1 && *(s + i + 1) == '\0')
			pf = i;
		i++;
	}
	lon = pf - pi;
	j = lon - 1;
	p = 1;
	for (i = pf; i >= pi; i--)
	{
		v += (s[i] - '0') * p;
		p = p * 10;
		j--;
	}
	if (sg == -1)
		v = v * -1;
	return (v);
}

#include "holberton.h"

/**
* rev_string - Entry point
* @s: char variable
*
*/

void rev_string(char *s)
{
	int i, j, t;
	char auxa, auxb;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	i = i - 1;
	t = i / 2;

	for (j = 0; i > t; i--)
	{
		auxa = *(s + i);
		auxb = *(s + j);
		*(s + i) = auxb;
		*(s + j) = auxa;
		j++;
	}
}

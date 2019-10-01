#include "holberton.h"

/**
* rev_string - Entry point
* @s: char variable
*
*/

void rev_string(char *s)
{
	int i = 0, t, j;

	while (*(s + i) != '\0')
		i++;

	t = i;
	j = t;

	char aux[t];

	i = 0;
	while (i < t)
	{
		aux[i] = *(s + j - 1);
		i++;
		j--;
	}
	i = 0;
	while (i < t)
	{
		*(s + i) = aux[i];
		i++;
	}
}

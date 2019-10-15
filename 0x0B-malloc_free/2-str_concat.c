#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - entry point.
 * @s1: char variable
 * @s2: char variable
 *
 * Return: ar or null
 */

char *str_concat(char *s1, char *s2)
{
	int t1 = 0, t2 = 0, i = 0, j = 0;
	char *ar;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t1])
		t1++;
	while (s2[t2])
		t2++;

	ar = malloc(t1 + t2 + 1);

	if (ar == NULL)
		return (NULL);
	while (i < t1)
	{
		ar[i] = s1[i];
		i++;
	}
	while (i <= t2 + t1)
	{
		ar[i] = s2[j];
		i++;
		j++;
	}

	return (ar);
}

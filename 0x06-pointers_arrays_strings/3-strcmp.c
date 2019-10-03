#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - Entry point
* @s1: char variable
* @s2: char variable
*
*/

int _strcmp(char *s1, char *s2)
{
	int t1 = 0, t2 = 0, i = 0, dif = 0;

	while (s1[t1] != 0)
		t1++;

	while (s2[t2] != 0)
		t2++;

	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			break;
		}
		i++;
	}

	if (t1 > t2)
		dif = s1[t1-1];

	if (t1 < t2)
		dif = s2[t2-1] * -1;
	
	if (t1 == t2)
		dif = 0;

	return (dif);
}

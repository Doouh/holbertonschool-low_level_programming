#include "holberton.h"
#include <stdio.h>

/**
* _strcat - Entry point
* @src: char variable
*
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return(dest);
}

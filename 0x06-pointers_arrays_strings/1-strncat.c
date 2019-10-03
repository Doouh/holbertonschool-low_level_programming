#include "holberton.h"

/**
* _strncat - Entry point
* @dest: char variable
* @src: char variable
* @n: int variable
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 1;

	while (dest[i])
		i++;

	while (k <= n)
	{
		if (src[j])
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		else
			break;

		k++;
	}

	return(dest);	
}

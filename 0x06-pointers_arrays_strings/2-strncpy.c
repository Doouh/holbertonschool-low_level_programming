#include "holberton.h"

/**
* _strncpy - Entry point
* @dest: char variable
* @src: char variable
* @n: int variable
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, k = 1;

	while (k <= n)
	{
		if (src[j])
			dest[j] = src[j];
		else
			dest[j] = '\0';
		j++;

		k++;
	}

	return (dest);
}

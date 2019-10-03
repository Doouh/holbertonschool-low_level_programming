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
	int i = 0;

	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}

	return (dest);
}

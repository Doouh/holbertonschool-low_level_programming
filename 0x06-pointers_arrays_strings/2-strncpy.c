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

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

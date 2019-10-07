#include "holberton.h"

/**
* _memcpy - Entry point
* @dest: char variable
* @src: char variable
* @n: int variable
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "holberton.h"

/**
* _strcpy - Entry point
* @dest: char variable
* @src: char variable
*
* Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, t;

	while (*(src + i) != '\0')
	{
		i++;
	}

	t = i - 1;

	i = 0;
	while (i <= t)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

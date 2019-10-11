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

	t = 0;
	while (t <= i)
	{
		*(dest + t) = *(src + t);
		t++;
	}

	return (dest);
}

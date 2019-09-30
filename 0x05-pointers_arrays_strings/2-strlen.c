#include "holberton.h"

/**
* _strlen - Entry point
* @s: int variable
*
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int cont = 0, i;

	while(*(s+i) != '\0')
	{
		i++;
		cont++;
	}

	return (cont);
}

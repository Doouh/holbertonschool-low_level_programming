#include "holberton.h"

/**
* puts2 - Entry point
* @str: int variable
*
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}

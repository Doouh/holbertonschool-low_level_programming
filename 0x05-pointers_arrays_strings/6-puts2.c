#include "holberton.h"

/**
* puts2 - Entry point
* @str: int variable
*
* Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
		i++;

	if (i % 2 == 0)
		i = i - 1;

	while (j <= i)
	{
		_putchar(*(str + j));
		j = j + 2;
	}

	_putchar('\n');
}

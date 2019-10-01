#include "holberton.h"

/**
* puts_half - Entry point
* @str: int variable
*
* Return: Always 0 (Success)
*/

void puts_half(char *str)
{
	int i = 0, t;

	while (*(str + i) != '\0')
	{
		i++;
	}

	t = i;

	if (t != 1)
	{
		if (t % 2 != 0)
			i = (t - 1) / 2;
		else
			i = t / 2;

		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}

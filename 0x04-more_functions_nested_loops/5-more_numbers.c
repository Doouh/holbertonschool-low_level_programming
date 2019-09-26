#include "holberton.h"

/**
* more_numbers - Entry point
*
*/

void more_numbers(void)
{
	int i, j, inc = 10;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('0' + 1);
				inc = 0;
			}

			_putchar('0' + ((i + inc) % 10));
		}
		_putchar('\n');
	}
}

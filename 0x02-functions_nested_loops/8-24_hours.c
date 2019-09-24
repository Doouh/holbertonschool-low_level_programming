#include "holberton.h"

void jack_bauer(void)
{
	int h1, h2, m1, m2, l = 10;
	
	for (h1 = 0; h1 < 3; h1++)
	{
		if (h1 == 2)
		{
			l = 4;
		}
		for (h2 = 0; h2 < l; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar('0'+h1);
					_putchar('0'+h2);
					_putchar(':');
					_putchar('0'+m1);
					_putchar('0'+m2);
					_putchar('\n');
				}
			}
		}
	}
}

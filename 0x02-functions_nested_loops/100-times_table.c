#include<stdio.h>
#include "holberton.h"


/**
 * print_times_table - entry point
 *
 * @n: int variable
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int i, m, a;

		for (i = 0; i < (n + 1); i++)
		{
			a = 0;
			printf("0");
			for (m = 0; m < n; m++)
			{
				if ((a + i) > 99)
				{
					printf(", %d", (a + i));
				}
				else if ((a + i) > 9)
				{
					printf(",  %d", (a + i));
				}
				else
				{
					printf(",   %d", (a + i));
				}
				a = a + i;
			}
			printf("\n");
		}
	}
}

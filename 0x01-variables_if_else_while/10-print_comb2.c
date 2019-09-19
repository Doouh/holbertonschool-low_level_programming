#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != 58 && j != 58)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(32);
			}
			else
			{
				putchar(i);
				putchar(j);
			}
		}
	}

	putchar('\n');

	return (0);
}

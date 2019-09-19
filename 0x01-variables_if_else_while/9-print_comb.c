#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}

#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alp[] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');

}

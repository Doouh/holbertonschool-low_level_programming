#include "holberton.h"

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

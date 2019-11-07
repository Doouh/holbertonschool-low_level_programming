#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - entry point
 * @num: unsigned long int
*/

void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);
	if (num & 1)
		putchar('1');
	else
		putchar('0');
}

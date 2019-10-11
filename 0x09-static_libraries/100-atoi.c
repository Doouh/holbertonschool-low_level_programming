#include "holberton.h"

/**
 * _atoi - entry point
 * @s: char variable
 *
 * Return: valor
 */

int _atoi(char *s)
{
	unsigned int valor = 0;
	int i, t, cont, j = 0;

	if (*s == '\0')
		return (0);
	t = 0;
	cont = 0;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
	{
		if (s[i] == '-')
		{
			cont++;
		}
	}

	for (; s[j] != '\0' && t == 0; j++)
	{
		if (s[j] >= 48 && s[j] <= 57)
		{
			valor = valor * 10 + s[j] - '0';

			if (s[j + 1] < 48 || s[j + 1] > 57)
			{
				t++;
			}
		}
	}

	if ((cont % 2) != 0)
	{
		valor = valor * -1;
	}
	return (valor);
}

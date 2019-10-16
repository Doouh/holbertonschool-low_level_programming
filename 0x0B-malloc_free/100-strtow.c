#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - entry point
 * @str: char variable
 * Return: **ar
 */

char **strtow(char *str)
{
	char **ar;
	int i, j, cont = 0, t, k = 0, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			cont++;
	}
	if (cont == 0)
		return (NULL);
	ar = malloc((cont + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' && k < cont; i++)
	{
		if (str[i] != ' ')
		{
			t = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, t++;
			ar[k] = malloc((t + 1) * sizeof(char));
			if (ar[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(ar[k]);
				free(ar);
				return (NULL);
			}
			for (m = 0; m < t; m++, i++)
				ar[k][m] = str[i];
			ar[k++][m] = '\0';
		}
	}
	ar[k] = NULL;
	return (ar);
}

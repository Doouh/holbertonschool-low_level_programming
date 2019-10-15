#include <stdlib.h>

/**
 * _strdup - entry point.
 * @str: char variable
 *
 * Return: ar or NULL
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ar;

	if (!*str)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(i + 1);
	if (!ar)
		return (NULL);
	while (j <= i)
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}

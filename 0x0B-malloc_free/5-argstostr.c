#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - entry point
 * @ac: int variable
 * @av: char variable
 *
 * Return: ar or NULL
*/

char *argstostr(int ac, char **av)
{
	int t = 0, i = 0, j = 0, ii = 0;
	char *ar, *c;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		c = av[i];
		j = 0;
		while (*c)
		{
			j++;
			c++;
		}
		i++;
		t = t + j + 1;
	}
	ar = malloc(t + 1);
	i = 0;
	j = 0;
	while (i < ac)
	{
		c = av[i];
		ii = 0;
		while (c[ii])
		{
			ar[j] = c[ii];
			j++;
			ii++;
		}
		ar[j] = '\n';
		i++;
		j++;
	}
	ar[t + 1] = '\0';
	return (ar);
}

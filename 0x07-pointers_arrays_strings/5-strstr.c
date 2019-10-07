#include "holberton.h"

/**
* _strstr - Entry point
* @hk: char variable
* @ne: char variable
*
* Return: dest
*/

char *_strstr(char *hk, char *ne)
{
	int i = 0, j, t = 0, cont;

	while (ne[t])
		t++;

	while (hk[i])
	{
		if (hk[i] == ne[j])
		{
			cont++;
			if (cont == t)
			{
				hk = hk + i - t + 1;
				return (hk);
			}
			j++;
		}
		else
		{
			j = 0;
			cont = 0;
		}
		i++;
	}
	hk = 0;
	return (hk);
}

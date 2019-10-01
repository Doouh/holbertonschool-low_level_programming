#include "holberton.h"
#include <stdio.h>

/*int to_int(char *s, int posf, int posi)
{
	int valor = 0, j, lon, potencias[10]={1,10,100,1000,10000,10000    0,1000000,10000000,100000000,1000000000};
	lon = posf - posi;
	j = lon - 1;

	for (i = posf; i >= posi; i--)
	{
		valor += (s[i] - '0') * potencias[lon - j - 1];
		j--;
	}

	if (sig == -1)
		valor = valor * -1;

	return (valor);
}*/

/**
* _atoi - Entry point
* @s: int variable
*
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{
	int i = 0, sig = 1, ban1 = 0, posi, posf, ban2 = 0, ban3 = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-' && ban1 == 0)
			sig = sig * -1;

		if (s[i] >= 48 && s[i] <= 57)
		{
			if (ban3 == 0)
			{
				ban1 = 1;
				if (ban2 == 0)
					posi = i;

				ban2 = 1;
			}
		}
		else if (ban2 == 1)
		{
			ban3 = 1;
			posf = i - 1;
			break;
		}
		if (ban2 == 1 && *(s + i + 1) == '\0')
			posf = i;

		i++;
	}

	int valor = 0, j, lon, potencias[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
	
	lon = posf - posi;
	j = lon - 1;
	for (i = posf; i >= posi; i--)
	{
		valor += (s[i] - '0') * potencias[lon - j - 1];
		j--;
	}
	if (sig == -1)
		valor = valor * -1;

	return (valor);
}

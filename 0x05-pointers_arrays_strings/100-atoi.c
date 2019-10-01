#include "holberton.h"
#include <stdio.h>

/**
* _atoi - Entry point
* @s: int variable
*
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{
	int i = 0, sig = 1, ban1 = 0, posi;
	int posf, ban2 = 0, ban3 = 0, lon, potencia, j, valor = 0;

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
	lon = posf - posi;
	j = lon - 1;
	potencia = 1;
	for (i = posf; i >= posi; i--)
	{
		valor += (s[i] - '0') * potencia;
		potencia = potencia * 10;
		j--;
	}
	if (sig == -1)
		valor = valor * -1;
	return (valor);
}

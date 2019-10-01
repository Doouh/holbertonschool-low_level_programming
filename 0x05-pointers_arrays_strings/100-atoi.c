#include "holberton.h"

int longitud(char *cadena)
{
	int i, valor = 0;

	for (i=0; cadena[ i ]!='\0'; i++)
		valor++;

	return (valor);
}

int to_int(char *cadena)
{
	int i, valor = 0, lon, potencias[5]={1,10,100,1000,10000};
	lon = longitud(cadena);

	for (i=lon-1; i>=0; i--)
		valor += (cadena[ i ]-'0') * potencias[ lon-i-1 ];

	return (valor);
}


/**
* _atoi - Entry point
* @s: int variable
*
* Return: Always 0 (Success)
*/

int _atoi(char *s)
{
	int i = 0, n;
	char c;

	while (*(s + i) != '\0')
	{
		c = *(s + i);
		if (*(s + i) >= 48 && *(s + i) <= 59)
			n = to_int(c);
	}

	return (n);
}

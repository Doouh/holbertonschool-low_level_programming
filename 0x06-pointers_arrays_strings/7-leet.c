#include "holberton.h"

/**
* leet - Entry point
* @s: char variable
* Return: s
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char rr[2][10];

	rr[0][0] = 'a';
	rr[0][1] = 'e';
	rr[0][2] = 't';
	rr[0][3] = 'l';
	rr[0][4] = 'o';
	rr[0][5] = 'A';
	rr[0][6] = 'E';
	rr[0][7] = 'T';
	rr[0][8] = 'L';
	rr[0][9] = 'O';
	rr[1][0] = '4';
	rr[1][1] = '3';
	rr[1][2] = '7';
	rr[1][3] = '1';
	rr[1][4] = '0';
	rr[1][5] = '4';
	rr[1][6] = '3';
	rr[1][7] = '7';
	rr[1][8] = '1';
	rr[1][9] = '0';

	while (s[i])
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == rr[0][j])
				s[i] = rr[1][j];
			j++;
		}
		i++;
	}

	return (s);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * strtow: entry point
 * @str: char variable
 *
 * Return: ar or NULL
*/

int cp(char *str)
{
	int i = 0, p = 0, b = 0;
	while(str[i])
	{
		if (str[i] != ' ')
		{
			p++;
			i++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				b = 1;
		}
		if (b == 0)
			i++;
	}
	return (p);
}

char **strtow(char *str)
{
	int cps = cp(str);
	char **ar = NULL;
	ar = malloc(sizeof(int *) * (cps + 1));
	if (!ar)
		return (NULL);

	int i = 0, p = 0, b = 0;
 14         while(str[i])
 15         {
 16                 if (str[i] != ' ')
 17                 {
 18                         p++;
 19                         i++;
 20                         while (str[i] != ' ' && str[i] != '\0')
 21                                 i++;
 22                         if (str[i] == '\0')
 23                                 b = 1;
 24                 }               
 if (b == 0)     
i++;
}  	

	printf("Palabras: %d\n", cps);
	return (ar);
}

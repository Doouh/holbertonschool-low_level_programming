#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: char variable
 * @s2: char variable
 * @n: unsigned int
 *
 * Return: er
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int i = 0, t = 0, j = 0;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (k <= n)
		n = k;
	t = i + n;
	ar = malloc(t + 1);
	if (!ar)
		return (NULL);
	while (s1[j])
	{
		ar[j] = s1[j];
		j++;
	}
	i = 0;
	while (j < t)
	{
		ar[j] = s2[i];
		j++, i++;
	}
	ar[j + 1] = '\0';
	return (ar);
}

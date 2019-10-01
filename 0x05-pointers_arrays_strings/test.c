/**
 * _atoi - function that multiplies two integers.
 * @s: The number to be checked
 *
 * Return: dest
 */
int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	int res = 0;
	int n, t, x, i = 0;

	t = 0;
	x = 0;
	for (n = 0; s[n] < 48 || s[n] > 57; n++)
	{
		if (s[n] == '-')
		{
			x++;
		}
	}

	for (; s[i] != '\0' && t == 0; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + s[i] - '0';

		if (s[i + 1] < 48 || s[i + 1] > 57)
		{
			t++;
		}
		}
	}

	if ((x % 2) != 0)
	{
		res = res * -1;
	}
	return (res);
}

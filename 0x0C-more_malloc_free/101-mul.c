#include <stdio.h>
#include <stdlib.h>

int cletras(char *str);
int _atoi(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void mfi(char *str, int size, char fill);
char *mul(char *s1, char *s2, char *new, unsigned int size_b);
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);

/**
 * main - entry point
 *
 * @argc: int variable
 * @argv: char variable
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int tt;
	int i;

	char *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		if (cletras(argv[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	tt = _strlen(argv[1]) + _strlen(argv[2]) + 1;
	res = _calloc(tt, sizeof(char));
	if (res == NULL)
		return (98);
	res = mul(argv[1], argv[2], res, tt);
	printf("%s\n", res);
	return (0);
}

/**
 * mul - entry point
 *
 * @s1: char variable
 * @s2: char variable
 * @new: char variable
 * @size_b: unsigned int variable
 *
 * Return: new
 */

char *mul(char *s1, char *s2, char *new, unsigned int size_b)
{
	char *mn, *my;
	int i = 0, res = 0;

	mn = (_strlen(s1) > _strlen(s2)) ? s1 : s2;
	my = (mn == s1) ? s2 : s1;
	res =  _atoi(mn);
	while (i < res)
	{
		new = infinite_add(new, my, new, size_b);
		i++;
	}
	return (new);
}

/**
 * _strlen - entry point
 *
 * @s: char variable
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * cletras - entry point
 *
 * @str: char variable
 *
 * Return: 0 or 1
 */

int cletras(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _atoi - entry point
 *
 * @s: char variable
 *
 * Return: total
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char working = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			working = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (working)
				break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
}

/**
 * infinite_add - adds two numbers
 *
 * @n1: *char - first number
 * @n2: *char - second number
 * @r:  *char - buffer where rs is stored
 * @size_r: int - size of buffer
 *
 * Return: pointer to r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int tempSizeR = size_r;
	char fill = 'd';
	int t1 = 0, t2 = 0, rs = 0, carry = 0;

	while (*(n1 + t1) != '\0')
		t1++;
	while (*(n2 + t2) != '\0')
		t2++;
	if (t1 > size_r - 2 || t2 > size_r - 2)
		return (0);
	t1--, t2--;
	while (size_r >= 0)
	{
		if (size_r == tempSizeR)
		{
			r[size_r--] = '\0';
			continue;
		}
		if (t1 < 0 && t2 < 0 && carry == 0)
		{
			r[size_r--] = fill;
			continue;
		}
		else if (t1 < 0 && t2 < 0 && carry != 0)
			rs = carry;
		else if (t1 < 0)
			rs = n2[t2] + carry - '0';
		else if (t2 < 0)
			rs = n1[t1] + carry - '0';
		else /* normal case */
		{
			rs = (n1[t1] - '0') + (n2[t2] - '0') + carry;
		}
		carry = 0;
		if (rs > 9)
		{
			carry = 1;
			rs = rs - 10;
		}
		t1--, t2--;
		r[size_r--] = rs + '0';
	}
	mfi(r, tempSizeR, fill);
	return (r);
}
/**
 * mfi - entry point
 * @arr: char variable
 * @arrSize: int variable
 * @aux: char variable
 *
 */
void mfi(char *arr, int arrSize, char aux)
{
	int i = 0;
	int pos = 0;

	while (i < arrSize)
	{
		if (arr[i] != aux)
		{
			arr[pos++] = arr[i];
			arr[i] = '\0';
		}
		else
			arr[i] = '\0';
		i++;
	}
}

/**
 * _calloc - allocates memory for an array, and inits
 *
 * @nmemb: number of members in array
 * @size: size of each member
 *
 * Return: void pointer to beginning of alloc/init'ed memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb < 1 || size < 1)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	res = set_mem(res, nmemb, size, '\0');
	return (res);
}
/**
 * set_mem - sets memory for void pointer
 *
 * @p: pointer to beginning of memory to set
 * @nmemb: number of members of array
 * @size: size of elements of array
 * @ch: character to set memory to
 *
 * Return: void pointer to beginning of set memory
 */
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch)
{
	char *cast = p;
	unsigned int i = 0;

	while (i < nmemb * size)
		cast[i++] = ch;
	return (p);
}

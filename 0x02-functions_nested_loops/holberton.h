#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char alp[] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(alp[i]);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}

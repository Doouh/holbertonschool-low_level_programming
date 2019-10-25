#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: char variable
 * @num: int variable
 * @...: string
*/

void print_strings(const char *separator, const unsigned int num, ...)
{
	va_list valist;
	unsigned int i;
	char *aux;

	va_start(valist, num);
	for (i = 0; i < num; i++)
	{
		aux = va_arg(valist, char *);
		if (aux != NULL)
			printf("%s", aux);
		else
			printf("(nil)");
		if (separator != NULL && i < num - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}


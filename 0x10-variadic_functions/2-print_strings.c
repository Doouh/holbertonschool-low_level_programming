#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: char variable
 * @n: int variable
 * @...: string
*/
void print_strings(const char *separator, const unsigned int num, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, num);
	for (i = 0; i < num; i++)
	{
		if (va_arg(valist, char*) != NULL)
			printf("%s", va_arg(valist, char *));
		else
			printf("(nil)");
		if (separator != NULL && i < num - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}


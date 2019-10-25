#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - entry point
 * @separator: int var
 * @num: int var
 * @...: sadas
*/

void print_numbers(const char *separator, const unsigned int num, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, num);
	for (i = 0; i < num; i++)
	{
		printf("%d", va_arg(valist, unsigned int));
		if (separator != NULL && i < num - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

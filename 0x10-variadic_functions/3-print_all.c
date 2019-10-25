#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - entry point
 * @ft: char * variable
 * @...: char
*/

void print_all(const char * const ft, ...)
{
	va_list valist;
	int v = 0, j = 0, a = 0;
	char *aux;

	while (ft[v])
		v++;
	va_start(valist, ft);
	while (j < v)
	{
		switch (ft[j])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				a = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				a = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				a = 1;
				break;
			case 's':
				aux = va_arg(valist, char *);
				if (aux == NULL)
					aux = "(nil)";
				printf("%s", aux);
				a = 1;
				break;
		}
		if (j < v - 1 && a == 1)
		{
			a = 0;
			printf(", ");
		}
		j++;
	}
	printf("\n");
	va_end(valist);
}

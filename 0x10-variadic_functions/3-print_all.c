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
	int j = 0;
	char *aux;

	while (ft && ft[j])
	{
		va_start(valist, ft);
		while (ft[j])
		{
			switch (ft[j])
			{
				case 'c':
					printf("%c", va_arg(valist, int));
					break;
				case 'i':
					printf("%d", va_arg(valist, int));
					break;
				case 'f':
					printf("%f", va_arg(valist, double));
					break;
				case 's':
					aux = va_arg(valist, char *);
					if (aux == NULL)
						aux = "(nil)";
					printf("%s", aux);
					break;
			}
			if ((ft[j] == 'i' || ft[j] == 'c' || ft[j] == 'f' ||
						ft[j] == 's') && ft[j + 1] != '\0')
				printf(", ");
			j++;
		}
	}
	printf("\n");
	va_end(valist);
}

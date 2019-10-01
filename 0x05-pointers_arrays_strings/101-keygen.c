#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num, acu = 2772;

	srand(time(NULL));
	num = rand();
	num = 32 + rand() % (126 - 32);

	while (acu != 0)
	{
		printf("%c", num);
		acu = acu - num;
		num = 32 + rand() % (126 - 32);
		if (acu < 126 && acu > 32)
		{
			num = acu;
		}
	}

	return (0);
}

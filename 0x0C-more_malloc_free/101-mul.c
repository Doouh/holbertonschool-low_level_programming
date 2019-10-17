#include <stdio.h>

/**
 * main - entry point
 * @argc: int variable
 * @argv: char variable
*/

void main(int argc, char **argv)
{
	int t1 = 0, t2 = 0;
	char *d1, *d2;
	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	d1 = *argv[1];
	d2 = *argv[2];
	while(d1[t1])
		t1++;
	while(d2[t2])
		t2++;
	

}

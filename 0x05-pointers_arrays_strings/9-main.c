#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[4];
    char *p;

    p = _strcpy(s1, "F\n");
    printf("%s", s1);
    printf("%s", p);
    return (0);
}

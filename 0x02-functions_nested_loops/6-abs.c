#include "holberton.h"

int _abs(int v)
{
	int r = 0;

	if (v < 0)
	{
		r = v * -1;
	}
	else
	{
		r = v;
	}

	return r;
}

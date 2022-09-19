#include <stdio.h>
#include <stdlib.h>

int numcmp(const char* ps, const char* pt)
{
	float a, b;

	a = atof(ps);
	b = atof(pt);

	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}
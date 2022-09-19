#include <stdio.h>
#include <string.h>

int mystrcmp(const char *ps, const char *pt)
{
	int i = 0;
	int len;

	int num = 0;

	len = ((strlen(ps) <= strlen(pt) )? strlen(ps) : strlen(pt));

	while (i < len)
	{
		if (ps[i] > pt[i])
		{
			i = i + len;
			num = 1;
		}
		else if (ps[i] < pt[i])
		{
			i = i + len;
			num = -1;
		}
		else
		{
			num = 0;
			i++;
		}
	}
	return num;
}
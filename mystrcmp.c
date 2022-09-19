#include <stdio.h>
#include <string.h>  //for strlen()

//int mystrcmp(char[], char[]);
int mystrcmp(char ps[], char pt[])
{
	int i = 0;
	int len;

	int num = 0;

	len = (strlen(ps) <= strlen(pt) ? strlen(ps) : strlen(pt));

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

int main()
{
	char s[80], t[80];
	int i = 0, j = 0, result;

	while ((s[i++] = getchar()) != '\n');
	s[--i] = '\0';
	while ((t[j++] = getchar()) != '\n');
	t[--j] = '\0';

	result = mystrcmp(s, t);

	printf("%d\n", result);

	return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "strcmp.h"
#include "numcmp.h"

#define NUM 1
#define CHARCT 2

int (* fcmp(char* ps, char* pt))(const char*, const char*)
{
	int cond;
	cond = NUM;
	 
	if (*ps == '-')
		ps++;
	while ((cond == NUM) && (*ps != NULL))
		if (isdigit(*ps) || *ps == '.')
			ps++;
		else
			cond = CHARCT;

	if (*pt == '-')
		pt++;
	while ((cond == NUM) && (*pt != NULL))
		if (isdigit(*pt) || *pt == '.')
			pt++;
		else
			cond = CHARCT;

	if (cond == NUM)
		return numcmp;
	else
		return mystrcmp;
}
int main(void)
{
	char s[80], t[80];

	int (*ptr)(const char*, const char*);

	scanf("%s %s", s, t);

	ptr = fcmp(s, t);

	printf("%d\n", ptr(s, t));

	return 0;
}
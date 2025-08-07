#include <stdio.h>

int main(void)
{
	int c, s = 0, t = 0, nl = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++s;
		else if (c == '	')
			++t;
		else if (c == '\n')
			++nl;
	}
	printf("Spaces - %d, Tabs - %d, New lines - %d\n", s, t, nl);
}

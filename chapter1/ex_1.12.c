#include <stdio.h>

#define IN 1;
#define OUT 0;
int main(void)
{
	int c;
	bool inWord = OUT;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' ||c == '\t')
		{
			if (inWord)
			{
				putchar('\n');
				inWord = OUT;		
			}
		}
		else
		{
			putchar(c);
			inWord = IN;
		}
	}
}

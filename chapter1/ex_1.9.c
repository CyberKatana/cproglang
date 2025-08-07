#include <stdio.h>

int main(void)
{
	int c;
	int inSpaceSequence = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && inSpaceSequence == 0)
		{
			putchar(c);
			inSpaceSequence = 1;
		}
		
		if (c != ' ')
		{
			inSpaceSequence = 0;
			putchar(c);
		}	
	}
}

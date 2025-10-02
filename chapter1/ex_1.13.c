#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_CAP 20
#define PRINT_STEPS_NUM 10
int main(void)
{
	int c;
	bool inWord = OUT;
	int wordLen = 0;
	int maxWordLen = 0;
	int chart[MAX_WORD_CAP - 1];
	int stepSize = 1;
	int chartLvl = 0;
	for (int i = 0; i <= MAX_WORD_CAP - 2; ++i)
	{
		chart[i] = 0;
	}
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' ||c == '\t')
		{
			if (inWord)
			{
				chart[wordLen - 1]++;
				if (wordLen > maxWordLen)
				{
					maxWordLen = wordLen;
				}
				wordLen = 0;
				inWord = OUT;
			}
		}
		else
		{
			if (wordLen < MAX_WORD_CAP)
			{
				wordLen++;
			}
			else
			{
				wordLen = MAX_WORD_CAP;
			}
			inWord = IN;
		}
	}

	stepSize = maxWordLen / PRINT_STEPS_NUM;
	if (stepSize < 1)
	{
		stepSize = 1;
	}


	for (int i = PRINT_STEPS_NUM; i >= 0; i--)
	{
		chartLvl = stepSize * i;
		printf("%3d |", chartLvl + 1);
		for (int j = 0; j <= MAX_WORD_CAP -1; j++)
		{
				if (chart[j] > chartLvl)
				{
					printf(" * ");
				}
				else
				{
					printf("   ");
				}
		}
		putchar('\n');
	}
	
	printf("    +");
	for (int j = 0; j <= MAX_WORD_CAP -1; j++)
	{
		printf("---");
	}
	
	printf("\n     ");
	for (int j = 1; j <= MAX_WORD_CAP; j++)
	{
		printf("%2d ", j);
	}

	printf("\n");
}

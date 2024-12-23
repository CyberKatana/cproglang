#include <stdio.h>

int main()
{
	float fahr,celsius;
	float lower, upper, step;
	float COEF;

	lower = 0;
	upper = 300;
	step = 20;

	COEF = 5.0 / 9.0;//Cache constat coefficietn of formela C=(5/9)*(F-32)

	printf("Farenheit Celsius\n");//Add heading to table

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = COEF * (fahr - 32.0);
		printf("%6.0f, %8.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

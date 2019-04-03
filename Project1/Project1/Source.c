#include<stdio.h>

main()
{
	/*prints Fahrenheit - Celsuis table for Fahrenheit = 0, 20, ..., 300*/

	float fahr, celsuis;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsuis = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsuis);
		fahr = fahr + step;
	}
}
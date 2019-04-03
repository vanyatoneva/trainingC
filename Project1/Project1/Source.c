#include<stdio.h>

main()
{
	/*prints Fahrenheit - Celsuis table for Fahrenheit = 0, 20, ..., 300*/

	int fahr, celsuis;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsuis = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsuis);
		fahr = fahr + step;
	}
}
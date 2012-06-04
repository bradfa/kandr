#include<stdio.h>
/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius  Fahr\n");

	celsius = lower;
	while (celsius <= upper ) {
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%6.1f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

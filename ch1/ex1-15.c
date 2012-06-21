#include <stdio.h>

/* The temperature conversion program of Section 1.2 but using a function
   for conversion */

/* Convert from fahrenheit to celsius */
float ftoc(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = ftoc(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

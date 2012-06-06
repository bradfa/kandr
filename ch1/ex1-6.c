#include <stdio.h>

/* Verify that "getchar() != EOF" is either 0 or 1 */
main()
{
	int result;

	printf ("Press CTRL-D to send EOF. Each char is evaluated upon\n");
	printf ("EOL being encountered (usually pressing RETURN).\n");

	while (result = (getchar() != EOF))
		printf ("getchar() != EOF result: %d\n", result);
	printf ("getchar() != EOF result: %d\n", result);
}


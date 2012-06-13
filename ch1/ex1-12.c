#include <stdio.h>

/* Print the input, but one word per line */
main()
{
	int c, lastc;

	lastc = 'a';
	while ((c = getchar()) != EOF) {
		if (c != '\n' && c != '\t' && c != ' ') {
			putchar(c);
			lastc = c;
		} else if (lastc != 0) {
			putchar('\n');
			lastc = 0;
		}
	}
}

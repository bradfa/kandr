#include <stdio.h>

/* Count the frequency of different characters in the input.
   Draw a histogram. */
main()
{
	int c, ii, jj;
	int freq[26]; /* A goes in index 0, B in 1, etc */

	for (ii = 0; ii < 26; ii++)
		freq[ii] = 0;

	while ((c = getchar()) != EOF) {
		/* Don't discriminate based on case */
		if (c >= 'a' && c <= 'z') {
			++freq[c - 'a'];
		} else if (c >= 'A' && c <= 'Z') {
			++freq[c - 'A'];
		}
	}

	for (ii = 0; ii < 26; ii++) {
		printf("%c: ", ii + 'A');
		for (jj = 0; jj < freq[ii]; jj++)
			printf("#");
		printf("\n");
	}
}

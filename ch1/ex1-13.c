#include <stdio.h>

#define IN	1
#define OUT	0

/* Count the length of words in input. Create a histogram. */
main()
{
	int c, nc, state, ii, jj;
	int wordlen[20]; /* Lengths longer than 19 get discarded */

	state = OUT;
	nc = 0;
	for (ii = 0; ii < 20; ii++)
		wordlen[ii] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (nc > 0 && nc < 20)
				++wordlen[nc];
			nc = 0;
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			nc = 1;
		} else if (state == IN) {
			++nc;
		}
	}

	for (ii = 1; ii < 20; ii++) {
		printf("%2d: ", ii);
		for (jj = 0; jj < wordlen[ii]; jj++)
			printf("#");
		printf("\n");
	}
}

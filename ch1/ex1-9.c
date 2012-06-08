#include <stdio.h>

/* Copy input to output but replace each string of one or more blanks
   with a single blank */
main()
{
	int c, prev;

	prev = 'a'; /* Anything except a blank should work */
	
	while ((c = getchar()) != EOF) {
		if (!(' ' == c && ' ' == prev))
			putchar(c);
		prev = c;
	}
}


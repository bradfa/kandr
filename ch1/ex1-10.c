#include <stdio.h>

/* Copy input to output but replace tabs with "\t", backspace with "\b"
   and backslash with "\\" */
main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		if ('\t' == c) {
			putchar('\\');
			putchar('t');
		} else if ('\b' == c) { /* stty raw needed to test */
			putchar('\\');
			putchar('b');
		} else if ('\\' == c) {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}
}


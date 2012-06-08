#include <stdio.h>

/* Count blanks, tabs, and new lines in input */
main()
{
	int c, blanks, tabs, newlines;
	
	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF) {
		if (' ' == c)
			++blanks;
		if ('\t' == c)
			++tabs;
		if ('\n' == c)
			++newlines;
	}
	printf("Blanks: %d Tabs: %d Newlines: %d\n", blanks, tabs,
			newlines);
}


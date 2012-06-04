#include <stdio.h>

main()
{
	/* Test various different escape sequences */
	/* If using an invalid escape sequence, gcc compalins:
	   ex1-2.c:7:9: warning: unknown escape sequence '\c'
	   ex1-2.c:8:9: warning: universal character names are only valid in C++ and C99
	   ex1-2.c:8:9: error: incomplete universal character name \u
	   ex1-2.c:9:9: warning: unknown escape sequence '\o'
	   ex1-2.c:10:9: warning: unknown escape sequence '\8'
	   ex1-2.c:11:9: warning: unknown escape sequence '\M'
	   ex1-2.c:12:9: warning: unknown escape sequence '\N'
	   ex1-2.c:13:9: warning: unknown escape sequence '\A'
	 */
	printf("\\n: hello, world\n");
	printf("\\c: hello, world\c");
	printf("\\u: hello, world\u");
	printf("\\o: hello, world\o");
	printf("\\8: hello, world\8");
	printf("\\M: hello, world\M");
	printf("\\N: hello, world\N");
	printf("\\A: hello, world\A");
	printf("\\a: hello, world\a");
}


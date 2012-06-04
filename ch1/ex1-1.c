#include <stdio.h>
/* Without #include <stdio.h>, gcc says:
   ex1-1.c: In function ‘main’:
   ex1-1.c:5: warning: incompatible implicit declaration of built-in function ‘printf’
*/

main()
/* Without main(), gcc says:
   ex1-1.c:8: error: expected identifier or ‘(’ before ‘{’ token
*/
{
	printf("hello, world\n");
}


#include <stdio.h>

int main(void)
{
	int n;
	int b[5];
	int *h;

	b[2] = 1024;
	h = &n;
/*
 * write your line of code here.....
 * Remember:
 * main - magic
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than line of code
 */
	*(h + 5) = 98;
/* ........so that this print 98\n */
	printf("a[2] = %d\n", b[2]);
	return (0);
}

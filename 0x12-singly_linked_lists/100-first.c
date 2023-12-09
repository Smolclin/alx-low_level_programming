#include <stdio.h>
void myFunction(void) __attribute__ ((constructor));
/**
 * myFunction - function that prints when executed
 */

void myFunction(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

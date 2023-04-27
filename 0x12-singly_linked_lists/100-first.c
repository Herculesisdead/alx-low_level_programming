#include <stdio.h>

void sentence(void) __attribute__ ((constructor));

/**
 * This outputs a string of characters
 * function
 */
void sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

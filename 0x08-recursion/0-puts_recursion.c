#include "main.h"
/**
 * this is a function that returns 0 
 * however only upon success 
 *
 *
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursions(s+1);
	}

	else
		_putchar('\n');
}

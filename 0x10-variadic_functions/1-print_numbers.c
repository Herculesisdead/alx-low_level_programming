#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * 
 * 
 * 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}

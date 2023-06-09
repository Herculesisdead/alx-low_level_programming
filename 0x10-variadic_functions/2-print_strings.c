#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * 
 * 
 * 
 * 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}

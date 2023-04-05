#include "main.h"
#include <unistd.h>
/**
 * This is a putchar that write the charatcer _c_ to the requirement 
 *
 *
 */
int_putchar(char c)
{
	return (write(1,&c,1));
}

#include "main.h"
#include <stdio.h>

/**
* print_numbers - prints numbers 0-9
* Return void
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
}

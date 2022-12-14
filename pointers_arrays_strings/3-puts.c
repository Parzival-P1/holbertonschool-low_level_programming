#include "main.h"

/**
 * _puts - writes the string s, and a writes a terminating
 * newline character, to the stream stdout.
 *
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

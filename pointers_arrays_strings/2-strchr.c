#include "main.h"
#include <string.h>
/**
 * _strchr - locates a char in a str
 *
 * @s: string to be located
 * @c: charachter to be located
 * Return: ptr to a char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		if (*s == c)
		{	
			return (s + i);
		}

		i++;
	}

	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}


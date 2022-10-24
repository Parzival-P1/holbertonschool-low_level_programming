#include "main.h"
#include <stddef.h>

/**
 * _strncpy - func that copies a string
 *
 * @dest: destination string.
 * @src: source string
 * @n: number of bytes of str to concat
 * Return: the val that has been copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
		return (NULL);

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';

	return (dest);
}

#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: str to be matched
 * @needle: str to be scaned
 * Return: ptr to the substr || if the substr is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0';  i++)
	{
		for (j = 0; needle[j] >= '\0'; j++)
		{
			if (haystack[i + j] != neddle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}


#include "main.h"
/**
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit (98);
	return (mem);
}


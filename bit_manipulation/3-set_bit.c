#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int to be printed as binary
 * @index: index of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}


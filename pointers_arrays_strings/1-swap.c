#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: points to an int a
 *
 * @b: points to an int b
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a =  *b;
	*b = temp;
}


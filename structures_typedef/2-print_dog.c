#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: dog struct
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		printf("Name: %s\n",d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}

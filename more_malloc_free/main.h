#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* 0. allocates memory using malloc */
void *malloc_checked(unsigned int b);

/* 1. concatenates two strings */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2. allocates memory for an array, using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3. creates an array of integers */
int *array_range(int min, int max);

#endif /* MAIN_H */


#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followd by a new line
 * for multiples of 3 prints "Fizz"
 * for multiples of 5 prints "Buzz"
 * for multiples of 3 & 5 prints "FizzBuzz"
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}


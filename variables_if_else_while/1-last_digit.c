#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n == 0)
		printf("%dand is 0\n", n);
	else if(n > 5)
		printf("%dand is greater than 5\n", n);
	else 
		printf("%dand is less thann 6 and not 0\n", n);
	return (0);
}

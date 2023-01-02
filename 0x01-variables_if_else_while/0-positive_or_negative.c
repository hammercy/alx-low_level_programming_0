#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
 * main-generate random number and evluate if it negative or positive
 * @n:a parameter that hold random number generated and checked
 *
 * rand: generate random number
 *
 * return: always 0 when successful
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);
		  
	return (0);
}

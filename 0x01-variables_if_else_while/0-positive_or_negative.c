#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */



/** main: main entry point
 * srand: generate a random number 
 * compare it with 0 
 * if greater prints is positive
 * if zero prints is zero
 * else prints is negative
 * */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n",n);
	else if (n==0)
		printf ("%d is zero\n", n);
	else 
		printf("%d  is negative\n",n);
	return (0);

}


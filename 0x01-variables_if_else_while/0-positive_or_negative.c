#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main- generate random number and print where negative or positive
 * @n: number to be checked
 * srand: generate a random number
 * return: alway 0 is successful 
 */

int main(void)

{
	int n;
	int x;
	x = 0;
	while (x < 10)
	{
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive \n" , n);
		else if (n == 0)
			printf("%d is zero \n" , n);
		else 
			printf("%d is negative \n" , n);
		x++;
	}
	return (0);

}


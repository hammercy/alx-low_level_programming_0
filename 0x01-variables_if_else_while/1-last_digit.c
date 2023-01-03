#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */



/**
 * main - check the last digit
 *
 * Description: the function generate random number 
 * fthen finds the last digit of the number 
 * checks if it is greater than 6 or less 6 or zero
 * Return: 0 always when successful
 */

int main(void)

{
	int n;
	int tmp ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	tmp = n % 10;
	if (n > 0)
	{
		tmp = tmp;
		if (tmp >= 6)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
		}
		else if (tmp == 0)
		{
			printf("Last digit of %d is %d and is zero\n", n, tmp);
		}
		else 
		{
			printf("Last digit of %d is %d and is less than 6 not 0\n", n, tmp);
		}
	}
	else if (n < 0)
	{
		tmp = -tmp;
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, tmp);
	}
	else 
	{
		printf("Last digit of %d is %d and is zero\n", n, tmp);
	}
	return (0);

}

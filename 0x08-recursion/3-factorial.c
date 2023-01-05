#include <unistd.h>
#include <stdio.h>
/**
 * factorial - return factorial of an integer
 * @n: an integer factorial to be calculated
 *
 * Return: return the factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else 
		return(n * factorial(n - 1));
	
}

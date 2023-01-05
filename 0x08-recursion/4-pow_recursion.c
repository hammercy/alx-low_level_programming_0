#include <unistd.h>
#include <stdio.h>

/**
 * _pow_recursion - calculate power of a number
 * @x: the base number
 * @y: the exponent number
 *
 * Return: return the power result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	
	}
	else if (y == 1)
	{
		return (x);
	}
	else 
	{
		y = y - 1;
		return (x * _pow_recursion(x,y));
	}
}

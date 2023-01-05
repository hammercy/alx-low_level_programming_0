#include <unistd.h>
#include <stdio.h>
/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: is number its square toot to be calculated
 *
 * Return: return the square toot result
 */
int _sqrtf(int n, int i)
{
	if (i >= n)
	{
		return (-1);
	}
	else
       	{
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			i = i + 1;	
			return (1 * _sqrtf(n, i));
		}
	}
}

int _sqrt_recursion(int n)
{
	int i;
	i = 1;
	i = _sqrtf(n,i);
	return (i);
}

#include <stdio.h>
/* more header include here */

/**
 * main - prints lower case alphabet
 *
 * Description: this function prints
 * lower case alphabet from start to 
 * finish
 * Return: 0 always when successful
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

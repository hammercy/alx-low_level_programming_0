#include <stdio.h>
#include <unistd.h>
/**
 *_puts_recursion - prints a string in reverse order
 *@ s: pointer to array of characters

 * Return: 0 always when successful
 *
 * main - test the puts_recursion function
 *
 * Return: 0 always when successul
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
	return;
}

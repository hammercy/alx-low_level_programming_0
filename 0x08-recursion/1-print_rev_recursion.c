#include <stdio.h>
#include <unistd.h>
/**
 * _print_rev_recursion - print string in reverse order
 * @ s: pointer to a array of characters
 *
 * Return: function return when successful
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
        _print_rev_recursion(s+1);
	putchar(*s);
	return;
}

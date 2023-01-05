#include <unistd.h>                                                                                                           
#include <stdio.h>                                                                                                            

/**                                                                                                                           
 * int_strlen_recursion - count character of a string                                                                
 *@s: pointer to the string                                                                                                  
 *                                                                                                                       
 * Return:  an integer number of character in a sting                                                                         
 *
 * _strlenf - return length of a string
 * @s: pointer to the string
 * @strlenp: pointer to count of character
 *
 * Return: it returns nothing
 
 */                                                                                                                           

                                                                                                                              
void  _strlenf(char *s, int *strlenp)                                                                                           
{                                                                                                                 
	if (*s == '\0')                                                                                                       
        	return;                                                                                            
        _strlenf(s + 1, strlenp );
	*strlenp = *strlenp + 1;
	return;                                                                                                
}                                                                                                                             

int _strlen_recursion(char *s)                                                                                                
{                                                                                                                       
	int strlenv;                                                                                                          
	strlenv = 0;    
	_strlenf(s, &strlenv);                                                                                       
	return strlenv;                                                                                                       

}                                                                                                                             


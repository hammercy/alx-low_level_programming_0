#include <unistd.h>                                                                                   
                                                                                       

/**
 * is_prime - recursive to find if a number is prime
 * @n: the number to be checked
 * @i: a parameter to iterative through the factors
 *
 *Return: 1 if it is prime 0 otherwise
 *
 * is_prime_number - to check prime number calls another fun                                                                   
 * @n: the number to be checked                                                                                               
 *                                                                                                                       
 * Return: return 1 if it is prime otherwise 0
 *
 *
 */                                                                                                                           

int is_prime(int n, int i)                                                                                                    
{            
  	if (i == 1 )                                                                     
       	{                                                                                                                     
               i = i + 1;                                                                                                    
               return(1 * is_prime(n, i));                                                                                   
       	}                                                                                                                     
	else if (i == n)                                                                                                    
	{                                                                                                                     
		return (1);                                                                                                  
       	}                                                                                                                   
	else                                                                                                              
   	{                                                                                                               
	   	if (n % i == 0)                                                                                              
	       	{                                                                                                             
                                                     
			return (0);
		}                                                                                                          
	      	else                                                                                                       
	       	{                                           
			i = i + 1;
			return (1 * is_prime(n, i));
		} 
	}
}			                                                                                                                              
int is_prime_number(int n)
{
	int i;
	i = 1;
	return (is_prime(n,i));
}


#include "main.h"
/**
 * _lsalpha - function to check if c is a letter, lowercase or uppercase
 * @c; ls is the int that we will use for the argument of the function
 * Return:0
 */
int _lsalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return(0);
}

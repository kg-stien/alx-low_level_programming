#include "main.h"
/**
 * _lsower -function to check for lowercase character
 * @c: ls is the int that will use for the argument of the function
 * Return:0
 */
int _lslower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return(0);
}

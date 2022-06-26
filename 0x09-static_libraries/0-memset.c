#include "main.h"
/**
*_memset - The _memset() function fills
*@s:target
*@b: constant 
*@n:number of byte
*Return: returns new value
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

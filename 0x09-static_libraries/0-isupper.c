#include "main.h"
/**
*_isupper - function 
*@c: character
*Return: returns 1 
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}

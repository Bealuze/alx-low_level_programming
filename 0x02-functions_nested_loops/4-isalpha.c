#include "main.h"
/**
 * _islower- returns 1 for lowercase c.
 * Return: 1 if c is lowercase or returns 0
 * @c : is the input
 */
int _islower(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

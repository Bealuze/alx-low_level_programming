#include "main.h"
/**
 * print_last_digit- last digit
 * Return:  0
 */
int print_last_digit(int x)
{
	int xy;

	if (x < 0)
		xy = -1 * (x % 10);
	else 
		xy = x % 10;
	
	_putchar(xy + '0');
	return (xy);
}

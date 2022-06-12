#include "main.h"
/**
 * _abs- absolute value
 * return: 0
 */
int _abs(int x)
{
	if (x >= 0)
		_putchar(x);
	else if (x < 0)
	{
		x = x * (-1);
		_putchar(x);
	}
	return (0);
}

#include "main.h"
/**
 * print_sign- print the sign of a number
 * Return: 0 or 1
 * @n : number
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}

}

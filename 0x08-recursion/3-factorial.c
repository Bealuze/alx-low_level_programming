#include "main.h"

/**
 * factorial - factorial of number
 * @n: integer parameter
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

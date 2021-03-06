#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 * is_prime - check all number < n if they can divide it
 * @n: int
 * @div: int
 * Return: int
 */

int is_prime(int n, int div)
{

	if (div >= n && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, div + 1));
}

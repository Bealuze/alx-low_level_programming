#include "main.h"
/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - find square root
 * @n: int to find square root
 * @root: square root
 * Return: root
 */
int sqr(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
		return  (sqr(n, root + 1));
	else
		return (-1);
}

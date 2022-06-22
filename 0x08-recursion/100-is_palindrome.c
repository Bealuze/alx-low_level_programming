#include "main.h"
/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p - palindrome
 * @s: pointer to string
 * @pos: position
 * Return: boolena
 */

int p(char *s, int pos)
{
	if (pos < 1)
	{
		return (1);
	}

	if (*s == *(s + pos))
	{
		return (p(s + 1, pos - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p(s, len - 1));
}

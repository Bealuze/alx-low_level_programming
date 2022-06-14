#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int dir = 1, ret = 0, num;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
	{
		if (s[num] == '-')
		{
			dir *= -1;
		}
	}

	for (int i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		ret *= 10;
		ret += (s[i] - 48);
	}

	return (dir * ret);
}

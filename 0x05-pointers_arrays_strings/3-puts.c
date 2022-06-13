#include "main.h"
/**
 * _puts - line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int len = 0;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

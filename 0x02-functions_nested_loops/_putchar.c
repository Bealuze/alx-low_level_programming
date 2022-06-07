#include <unistd.h>
/*
 * _putchar write a character to standard output
 * Return: 0
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

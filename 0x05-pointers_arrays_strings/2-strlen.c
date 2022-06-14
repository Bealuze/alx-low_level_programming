#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: pointer
 * Return: void
*/


int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ret = malloc(sizeof(c) * size);

	if (ret == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ret[i] = c;

	return (ret);
}

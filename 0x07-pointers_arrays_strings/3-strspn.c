#include "main.h"
/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *y = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				x++;
				break;
			}
		if (!(*--accept))
			break;
		accept = y;
	}
	return (x);
}

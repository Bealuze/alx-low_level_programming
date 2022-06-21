#include "main.h"

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *res = haystack;
	char *first = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (res);
		}
		needle = first;
		res++;
		haystack = res;
	}
	return (0);
}

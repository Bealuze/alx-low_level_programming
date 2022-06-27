#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int x, i, j, y;

	if (ac == 0)
		return (NULL);

	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			x++;
		x++;
	}

	res = malloc((x + 1) * sizeof(char));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = j = y = 0; y < x; j++, y++)
	{
		if (av[i][j] == '\0')
		{
			res[y] = '\n';
			i++;
			y++;
			j = 0;
		}
		if (y < x - 1)
			res[y] = av[i][j];
	}
	res[y] = '\0';

	return (res);
}

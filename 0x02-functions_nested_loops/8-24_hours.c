#include "main.h"
/**
 * jack_bauer- 24hours
 * Return: 0
 */
void jack_bauer(void)
{
	int j;
	int i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
			j++;
		}
		i++;
	}
}

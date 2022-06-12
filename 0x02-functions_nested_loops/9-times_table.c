#include "main.h"
/**
 * times_table- time table
 */
void times_table(void)
{
	int j;
	int x;
	int i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			x = i * j;
			_putchar(x);
			_putchar(',');
			if (j == 9)
				_putchar('\n');
			j++;
		}
		i++;
	}
}

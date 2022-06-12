#include "main.h"
/**
 * jack_bauer- 24hours
 * Return: 0
 */
void jack_bauer(void)
{
	int j;
	int k;
	int l;
	int x = 9;
	int i = 0;

	while (i < 3)
	{
		if (i == 2)
			x = 3;
		j = 0;
		while (j <= x)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

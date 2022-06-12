#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{
	int i = 0;
	int x;
	int j;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (j == 0)
				_putchar('0' + x);
			else if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x < 100)
			{
				_putchar(' ');
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			else
			{
				_putchar('0' + x / 100);
				_putchar('0' + (x - 100) / 10);
				_putchar('0' + x % 10);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}

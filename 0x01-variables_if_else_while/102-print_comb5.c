#include <stdio.h>
/**
 * main- entry
 * Return: alawys 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; ++i)
	{
		for (j = 0; j < 100; ++j)
		{
			if (j > i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i == 98 && j == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main- entry
 * Return: alawys 0
 */
int main(void)
{
	int i = 0;
	int j;
	int k;
	int l;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					if (!(i == l && k == j))
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
					if (!(j + i == 18 && l + k == 17 && k == 9))
					{
					putchar(',');
					putchar(' ');
						}
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}

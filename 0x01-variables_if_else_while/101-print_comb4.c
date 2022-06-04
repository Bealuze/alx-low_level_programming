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

	while (i < 0)
	{
		j = 0;

		while (j < 10)
		{
			k = 0;

			while (k < 10)
			{
				if (i < j && j < k && i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}

	return (0);
}

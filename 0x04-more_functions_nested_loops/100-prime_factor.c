#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long x = 612852475143, y = (int) sqrt(x);

while (1)
{

	if (x % y == 0)
	{
		printf("%lu \n", x / y);
		break;
	}
	y--;

}

return (0);
}

#include <unistd.h>
/**
 * main- entry point
 * Return: 1
 */
int main(void)
{
	char quoe[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quoe, 59);
	return (1);
}

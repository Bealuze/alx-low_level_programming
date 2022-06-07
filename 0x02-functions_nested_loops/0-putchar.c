#include <stdio.h>
/**
 * main- priny
 * Return: always success 0
 */
int main(void)
{
	char out[9] = "_putchar";
	int letter;

	for (letter = 0; letter <= 8; letter++)
		putchar(out[letter]);
	putchar('\n');

	return 0;
}

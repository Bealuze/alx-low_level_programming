#include "main.h"
/*
 * main- prints alphabets
 * return: 0
 */
void print_alphabet(void)
{
	char lAlphabet;

	for (lAlphabet = 'a'; lAlphabet <= 'z'; lAlphabet++)
	{
		putchar(lAlphabet);
	}
	putchar('\n');

	return (0);
}
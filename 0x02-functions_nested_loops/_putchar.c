#include <unistd.h>
/**
 *_putchar - print the char out
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

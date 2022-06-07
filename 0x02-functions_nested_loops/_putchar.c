#include <unistd.h>
/**
 *_putchar - print the char out
 **/
int _putchar(char out)
{
	return (write(1, &out, 1));
}

#include "main.h"
#include <unistd.h>

/**
 * main - Print a text and a new line
 *
 * Return - 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

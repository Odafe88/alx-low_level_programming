#include "main.h"

/**
 * _islower - checks for lowercase of a character
 *
 * @c: the character
 *
 * Return: 1 if lowercase 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

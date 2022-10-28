#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
*/

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

#include "main.h"

/**
 * swap_int-Swaps the values of two integers.
 * @a:First argument to swap.
 * @b:second argument to swap.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

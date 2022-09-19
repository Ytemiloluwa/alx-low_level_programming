#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int store_a;

	store_a = *a;
	*a = *b;
	*b = store_a;
}

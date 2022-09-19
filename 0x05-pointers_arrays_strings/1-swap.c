#include "main.h"
/**
 * swap_int - given two integers swap the varable
 * @a: parameter 1
 * @b: parameter 2
 * retun- always return 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

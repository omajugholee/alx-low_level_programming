#include "main.h"
#include <string.h>

/**
 * print_rev -> print a string in reverse order
 * @s: the given string in reverse order
 * return: void
 */
void print_rev(char *s)
{
	int n, i;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

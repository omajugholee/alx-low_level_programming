#include "main.h"

/**
 * print_rev -> print a string in reverse order
 * @s: the given string in reverse order
 * return: void
 */
void print_rev(char *s)
{
	for (; *s != '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts -> a funtion that prints a string followed by a new line
 * @str: a parameter that _puts
 *return: returns void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar("\n");
}

#include "main.h"
#include <string.h>

/**
 * puts_half -> funtion prints half other char of a string
 * @str: paramenter for string
 * return: returns void
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2; 
	for (i = y; i < x; i ++)
		_purchar(str[i]);
	_putchar('\n');
}

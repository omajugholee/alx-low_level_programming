#include "main.h"
#include <string.h>

/**
 * puts2 -> funtion prints out other char of a string
 * @str: paramenter for string
 * return: returns void
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i+=2)
	{
		_putchar(str[i]);
	}
	  _putchar('\n');
}

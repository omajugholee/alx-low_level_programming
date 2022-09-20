#include "main.h"
#include <string.h>

/**
 * rev_string -> funtion that returns reverse strings
 * @s: a charter of strings
 * return: returns void
 */
void rev_string(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

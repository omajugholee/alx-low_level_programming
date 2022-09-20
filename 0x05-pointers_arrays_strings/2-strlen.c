#include "main.h"
#include <string.h>
/**
 * _strlen - return lenght of string.
 * @s: parameter to compare.
 * Return: void.
 */
int _strlen(char *s)
{
	int len;

	for (; *s != 0 ; s++)
	{
		len += 1;
	}
	return (strlen(s));
}

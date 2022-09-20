#include "main.h"
#include <string.h>

/**
 * rev_string -> funtion that returns reverse strings
 * @s: a charter of strings
 * return: returns void
 */
void rev_string(char *s)
{
	char tmp;
	int i, lenght1, lenght2;

	lenght1 = 0;
	lenght2 = 0;

	while (s[lenght1] != '\0')
		lenght1++;
	lenght2 = lenght - 1;
	for (i = 0; i < lenght1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght2];
		s[lenght2] = tmp;
		lenght2 -= 1;
	}
}

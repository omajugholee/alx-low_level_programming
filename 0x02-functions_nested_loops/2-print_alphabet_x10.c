#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Description - print the alphabelts in lowercase
 * Return: Always 0.
 */
void print_alphabelt_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}

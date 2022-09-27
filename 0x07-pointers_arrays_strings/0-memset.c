#include "main.h"

/**
 * _memset -> a function that fills memory with a constant byte.
 * @s -> a string
 * @b -> a charater
 * @n -> an integer number
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

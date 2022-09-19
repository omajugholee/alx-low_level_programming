#include "main.h"
/**
 * int _strlen - return lenght of string.
 * @s: parameter to compare.
 * Return: void.
 */
int _strlen(char *s);
{
	int i = 0;

	while (* (s + i))
		i++;
	
		return (i);

}
int  main(void)
{
	char hh[4] = "Dogecoin";

	printf("%d\n", _strlen(hh));
}

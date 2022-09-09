#include<stdio.h>
/**
 * main -prints the strings in the put function
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	
	printf( "Size of char: %ld byte(s)\n", sizeof(c));
	printf( "Size of int: %ld byte(s)\n", sizeof(i));
	printf( "Size of long int: %ld byte(s)\n", sizeof(li));
	printf( "Size of long long int: %ld byte(s)\n", sizeof(lli));
	printf( "Size of float is: %ld byte(s)\n", sizeof(f));

	return(0);
}

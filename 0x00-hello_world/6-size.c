#include<stdio.h>

int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;
	
	printf( "the size of char is: %lu,\n", (unsigned long)sizeof(c));
	printf( "the size of int is: %lu,\n", (unsigned long)sizeof(i));
	printf( "the size of long int is: %lu,\n", (unsigned long)sizeof(li));
	printf( "the size of long long is: %lu,\n", (unsigned long)sizeof(ll));
	printf( "the size of float is: %lu,\n" (unsigned long)sizeof(f));

	return(0);
}

#include <stdio.h>
/**
* main - calculate size
*
* Description: using the main function
* calculate the size of bytes allocated to i, d and c
* Return: 0
*/
int main(void)
{
	int i;
	char c;
	long li;
	long long lli;
	float f;

	printf("size of int: %d byte(s)\n", sizeof (i));
	printf("size  of char: %d byte(s)\n", sizeof (c));
	printf("size for long: %d byte(s)\n", sizeof (li));
	printf("size of long long: %d byte(s)\n", sizeof (lli));
	printf("size of float: %d byte(s)\n", sizeof (f));
	return (0);
}

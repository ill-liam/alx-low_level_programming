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
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof (c));
	printf("size  of an int: %d byte(s)\n", sizeof (i));
	printf("size for a long: %d byte(s)\n", sizeof (li));
	printf("size of a long long: %d byte(s)\n", sizeof (lli));
	printf("size of a float: %d byte(s)\n", sizeof (f));
	return (0);
}

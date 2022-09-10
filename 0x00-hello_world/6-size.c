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

	print f("size of int: %d byte(s)\n", sizeof (i));
	print f("size  of char: %d byte(s)\n", sizeof (c));
	print f("size for long: %d byte(s)\n", sizeof (li));
	print f("size of long long: %d byte(s)\n", sizeof (lli));
	print f("size of float: %d byte(s)\n", sizeof (f));
	return (0);
}

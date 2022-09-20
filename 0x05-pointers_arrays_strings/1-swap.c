#include "main.h"
#include <stdio.h>
/**
 * void swap_int -  swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b);
{
	int *p = a;

	*a = *b;
	*b = *p;
}

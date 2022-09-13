#include <stdio.h>
/**
 * main - prints single digits
 *
 * Description: using the main function
 * this program prints signle digit
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	{
		putchar('\n');
	}
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this program prints base numbers in lowercase
 * followed by a new linei
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}

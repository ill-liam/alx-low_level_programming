#include <stdio.h>
/**
 * main - prints aphabet in lower and uppercase
 *
 * Description: this code prints alphabet in lower and upper case
 * then add a new line
 * Return : Always 0 (success)
 */
int main(void)
{
	char ch;
	char c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints the alphabet in lower case and in uppercase
 *
 * Description: this code prints alphabet in lower and upper case
 * then add a new line
 * Return: 0
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

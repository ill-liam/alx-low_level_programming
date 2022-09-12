#include <stdio.h>
/**
 * main - prints alphabet in lower case
 *
 * Description: This code prints aphabet in lowercase
 * then a new line
 * Return: 0
 */
int main(void)
{
	char  ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

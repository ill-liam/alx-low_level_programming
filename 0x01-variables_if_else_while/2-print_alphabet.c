#include <stdio.h>
/**
 * main - prints alphabet in lower case
 *
 * Description: Putchar function
 * Return: 0
 */
main int(void)
{
	char  ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

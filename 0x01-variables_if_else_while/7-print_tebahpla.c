#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Description: using the main function
 * this program prints aplphabet in reverse
 * followed by a new line
 * Return:  0
 */
int main(void)
{
	char ch;

	for (ch  = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}

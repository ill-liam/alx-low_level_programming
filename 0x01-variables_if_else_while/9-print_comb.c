#include <stdio.h>
/**
 * main - prints all possible combination
 *
 * Description: usih the main function
 * this program prints all the possible combination
 * of a single digit number
 * followed by a new line, comma and space
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * This program prints the alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}

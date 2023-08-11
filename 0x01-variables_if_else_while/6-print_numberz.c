#include <stdio.h>

/**
 * main - Entry point
 * This program prints numbers 0-9
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}

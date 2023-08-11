#include <stdio.h>

/**
* main - Entry point
* This program prints the alphabet in small letters
* Return: 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

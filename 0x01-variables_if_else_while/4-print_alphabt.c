#include <stdio.h>

/**
 * main - Entry point
 * This programs prints the alphabet except e&q
 * Return: 0
 */

int main(void)
{
	 char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - main entry
 * Description: printing numbers base 16
 * Return: 0
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

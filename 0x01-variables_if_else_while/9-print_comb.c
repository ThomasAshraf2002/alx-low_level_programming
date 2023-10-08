#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: print single digit numbers
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}


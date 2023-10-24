#include <stdio.h>
/**
 *main - entry point
 *
 *Descreption: prints all possible different combinations of two digits.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 + 1 ; y < 10 ; y++)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 *main -Entry point
 *
 *Description: print digits from 1 to 9.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x  + '0');
			x++;
	}
	putchar('\n');
	return (0);
}

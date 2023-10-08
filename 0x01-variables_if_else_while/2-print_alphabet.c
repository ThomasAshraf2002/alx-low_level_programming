#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: print all alphabet letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char my_char = 'a';

	while (my_char <= 'z')
	{
		putchar(my_char);
		       my_char++;
	}
	putchar('\n');
	return (0);
}

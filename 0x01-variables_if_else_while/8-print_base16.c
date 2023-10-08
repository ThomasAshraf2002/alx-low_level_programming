#include <stdio.h>
/**
 *main - Entry point
 *
 *description:prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char ch = 0;
	char CH = 'a';

	do {
		while (ch <= 9)
		{
			putchar (ch + '0');
				ch++;
		}
		putchar(CH);
			CH++;
		} while (CH <= 'f');
	putchar('\n');
	return (0);
}

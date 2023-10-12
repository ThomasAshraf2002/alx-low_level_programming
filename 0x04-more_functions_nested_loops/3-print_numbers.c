#include "main.h"
/**
 * print_numbers - print 0 - 9
 * only use putchar twice
 * return: Always 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_line - print a stight line
 * only use _putchar function to print
 * @n: number of times  the character should be printed
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_square - with character #
 * @size: is the size of the square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			_putchar('#');
		_putchar('\n');
	}
}

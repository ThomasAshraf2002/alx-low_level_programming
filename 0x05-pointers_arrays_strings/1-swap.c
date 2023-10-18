#include <stdio.h>
/**
 * swap_int - swaps the values of two integers using parameters.
 *
 *@a: int parameters
 *@b: int parameters
 *
 *return: always 0
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

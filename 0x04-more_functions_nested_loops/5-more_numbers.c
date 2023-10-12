#include "main.h"
/**
 * more_numbers - print 10 times from 0 to 14
 * Only use putchar three times
 * Retuen: Always 0 (success)
 *
 */
void more_numbers(void)
{
	int row, coun, num;

	for (row = 1; row <= 10; row++)
	{
		for (coun = 0; coun <= 14; coun++)
		{
			num = coun;
			if (coun > 9)
			{
				_putchar(1 + 48);
				num = coun % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
}

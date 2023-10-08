#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entey point
 *
 *Return : Always 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit % 10 > 5)
		printf("Last digit of %d is %d ans is greater than 5\n", n, digit);
	else if (digit % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if(digit % 10 < 6 && digit % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}

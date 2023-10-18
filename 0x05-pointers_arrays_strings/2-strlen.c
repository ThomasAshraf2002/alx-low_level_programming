#include <stdio.h>
/**
 *_strlen - returns the length of a string.
 *
 *@s: string parameters
 *Return: always 0.
 */
int _strlen(char *s)
{
	int x;

	x = strlen(s);
	printf("%d", x);
	return (x);
}

#include "main.h"
/**
 *_isupper - uppercase letter
 *@c: char to check
 *Return: 0 (upper) || 1 (lower)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

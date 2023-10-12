#include "main.h"
/**
 * _isdigit - check if input between 1 & 9
 *
 *@c: input
 *
 * Return: 1 || 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

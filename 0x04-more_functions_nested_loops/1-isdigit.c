#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The number to be checked
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= 40 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

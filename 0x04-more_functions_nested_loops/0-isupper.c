#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @x: The letter to be checked
 * Return: 1 for uppercases or 0 otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}

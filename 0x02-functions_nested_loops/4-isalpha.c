#include "main.h"

/**
 * _isalpha - Checks for alphabets
 * @c: The character to be checked
 * Return: 1 for letters or o otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

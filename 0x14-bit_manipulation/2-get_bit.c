#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit to get
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int y;

	if (index > 63)
		return (-1);

	y = (n >> index) & 1;

	return (y);
}

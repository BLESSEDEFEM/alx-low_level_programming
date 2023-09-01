#include "main.h"

/**
 * get_bit - a function that returns the value of a
 * bit at a given index
 * @index: the index of the bit to be derived
 * @n: the number to check its value
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > sizeof(size_t) * 8)
		return (-1);

	while (i < index)
	{
		n = n >> 1;
		i++;
	}

	return (n & 1);
}

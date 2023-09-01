#include "main.h"
/**
 * clear_bit - a function that sets the value of
 * a bit to 0 at a given index
 *
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	if (*n & mask)
		*n ^= mask;

	return (1);
}

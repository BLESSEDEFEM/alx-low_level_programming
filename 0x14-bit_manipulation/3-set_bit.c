#include "main.h"
/**
 * set_bit - a function that sets the value of 
 * a bit to 1 at a given index
 * 
 * @n: pointer to the bit to be manipulated
 * @index: position of the bit to be manipulated
 * Return: 1 on success and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int eden;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	eden = 1;
	eden = eden << index;
	*n = ((*n) | eden);
	return (1);
}

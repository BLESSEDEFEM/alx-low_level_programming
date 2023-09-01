#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: the first number to compare
 * @m: the second number to compare
 * Return: the number of bits you would like to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;
	
	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	
	return (count);
}

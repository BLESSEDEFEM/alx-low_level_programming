#include "main.h"
/**
 * clear_bit - a function that sets the value of 
 * a bit to 0 at a given index
 *
 * @n: pointer to the numbet
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
       unsigned int mask;

       mask = 1;
       mask = mask << index;
       if (index > sizeof(unsigned long int) * 8 || n == NULL)
	       return (-1);
       if (((*n >> index) & 1) == 1)
	       *n = mask ^ *n;

       return (1);
}

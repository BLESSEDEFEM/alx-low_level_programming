#include "main.h"

/**
 * get_endianness - a function that checks the endianness or system byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	int little_or_big;

	little_or_big = (int)(((char *)&a)[0]);
	return (little_or_big);
}

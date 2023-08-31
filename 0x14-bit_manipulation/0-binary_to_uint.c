#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a character pointer to a string containing the binary numbers
 * Return: the converted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t e = 0;
	size_t f = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len] != '\0')
		len++;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - '0');
	e = 0;
	while (b[e] != '\0')
	{
		if (b[e] != '0' && b[e] != '1')
			return (0);
		f = len - 1;
		while (f > 0)
		{
			pow = pow * base;
			f--;
		}
		sum = sum + (pow * (b[e] - '0'));
		len--;
		pow = 1;
		e++;
	}
	return (sum);
}

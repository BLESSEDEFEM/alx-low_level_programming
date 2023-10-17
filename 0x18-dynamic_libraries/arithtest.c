#include <stdio.h>

/*
 * main - Entry point.
 *
 * Description: to call all functions in arithmetic.c file
 */
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);


/*
 * main - Entry point.
 *
 * Description: to call all functions in arithmetic.c file
 */
int main(void)
{
	int a = 66;
	int b = -76;
	int arithmetic;

	arithmetic = sum(a, b);
	printf("%d + %d = %d\n", a, b, arithmetic);

	arithmetic = sub(a, b);
	printf("%d - %d = %d\n", a, b, arithmetic);

	arithmetic = mul(a, b);
	printf("%d * %d = %d\n", a, b, arithmetic);

	arithmetic = div(a, b);
	printf("%d / %d = %d\n", a, b, arithmetic);

	arithmetic = mod(a, b);
	printf("%d %% %d = %d\n", a, b, arithmetic);

	return (0);
}

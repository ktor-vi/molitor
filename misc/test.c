#include <limits.h>
#include <stdio.h>

#define ABS(x) (((x) + ((x) >> (sizeof(int) * CHAR_BIT            \
				- 1))) ^ ((x) >> (sizeof(int) * CHAR_BIT - 1)))   \

int	main(void)
{
	int num1 = -42;
	int num2 = 42;

	printf("Absolute value of num1: %d\n", ABS(num1));
	printf("Absolute value of num2: %d\n", ABS(num2));

	return (0);
}
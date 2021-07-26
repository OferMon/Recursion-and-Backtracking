#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* The function gets a digit and a number, and checks several digits in a large mixer from the received number */
unsigned count_larger(unsigned n, unsigned x);

// check functions
void main() {
	unsigned int num, digit;
	printf("Enter an integer number\n");
	scanf("%u", &num);

	printf("Enter digit ");
	scanf("%u", &digit);

	printf("There are %u digits in the number bigger than %u\n", count_larger(num, digit), digit);
	system("pause");
}

unsigned count_larger(unsigned n, unsigned x)
{
	if (n > 0)
	{
		if (n % 10 > x)
			return 1 + count_larger(n / 10, x);
		return count_larger(n / 10, x);
	}
	return 0;
}

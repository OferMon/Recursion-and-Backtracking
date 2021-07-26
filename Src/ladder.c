#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The function calculates how many ways to go down the ladder
unsigned int ladder(unsigned int n);

// check function
void main()
{
	unsigned int x = ladder(6);
	printf("6 Steps:\n", x);
	printf("%d ways down\n", x);
	system("pause");
}

unsigned int ladder(unsigned int n)
{
	if (n == 2 || n == 1) return n;
	return (ladder(n - 1) + ladder(n - 2));
}

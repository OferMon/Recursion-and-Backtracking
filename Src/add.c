#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

/*This function prints a array*/
void printNumArr(unsigned a[], unsigned n);
/*This recursive function sums up 2 arrays and returns carry*/
int add(unsigned a[], unsigned b[], unsigned c[], unsigned n);

void main()
{
	unsigned a[SIZE] = { 0,0,7,5,4 };
	unsigned b[SIZE] = { 0,1,8,6,7 };
	unsigned c[SIZE];
	printNumArr(a, SIZE);
	unsigned carry = add(a, b, c, SIZE);
	putchar('+');
	printNumArr(b, SIZE);
	putchar('=');	printNumArr(c, SIZE);
	printf(" (%d)\n", carry);
	system("pause");
}


void printNumArr(unsigned a[], unsigned n)
{
	for (unsigned i = 0; i < n; i++)
		printf("%u", a[i]);
}


int add(unsigned a[], unsigned b[], unsigned c[], unsigned n)
{
	int carry = 0;
	n--;
	c[n] = (a[n] + b[n]) % 10;
	if ((a[n] + b[n]) > 9)
		carry = 1;
	if (!n)
		return carry;
	if ((a[n] + b[n]) > 9)
		a[n - 1]++;
	carry = add(a, b, c, n);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A function receives an extension and a number and checks whether there is a combination of sum of numbers in an array equal to the number the function receives
int subsum(unsigned arr[], unsigned len, unsigned x);

// check functions
void main()
{
	unsigned int arr[5] = { 1,2,3,4,5 };
	printf("The array is: { 1,2,3,4,5 }\n");
	printf("the number is: 30\n");
	printf("function rerurn: %d\n", subsum(arr, 5, 30));
	system("pause");
}

int subsum(unsigned arr[], unsigned len, unsigned x)
{
	if (x - arr[0] == 0)
		return 1;
	if (len - 1>0)
		return (subsum(arr + 1, len - 1, x - arr[0]) || subsum(arr + 1, len - 1, x));
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void list_down(int n);    /* get integer nuumber, print n->1 order */
void list_up(int n);    /* get integer nuumber, print 1->n order */

// check functions
void main() {
	int num;
	printf("Enter an integer number\n");
	scanf("%d", &num);

	list_up(num);
	printf("\n");
	list_down(num);
	printf("\n");
	system("pause");
}

void list_down(int n)
{
	if (n == 0)
		return;
	printf("%d ", n);
	list_down(n - 1);
}

void list_up(int n)
{
	if (n == 0)
		return;

	list_up(n - 1);
	printf("%d ", n);
}

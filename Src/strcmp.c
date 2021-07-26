#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmp(const char* str1, const char*str2);     // same like strcmp (in string.h)

// check function
void main()
{
	char str1[10] = "ABcd";
	printf("First strint: ABcd\n");
	char str2[10] = "Abcd";
	printf("Secend strint: Abcd\n");
	printf("strcmp return: %d\n", strcmp(str1, str2));
	system("pause");
}

int strcmp(const char* str1, const char*str2)
{
	if (*str1 == *str2)
	{
		if (*str1 == NULL) return 0;
		return strcmp(str1 + 1, str2 + 1);
	}
	if (*str1 > *str2) return 1;
	if (*str1 < *str2) return -1;
}
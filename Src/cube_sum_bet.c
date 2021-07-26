#define _CRT_SECURE_NO_WARNINGS
#define N 3
#define MIN_NUMBER_CUBE 1
#define MAX_NUMBER_CUBE 6

#include <stdio.h>
#include <stdlib.h>

void print_solution(int *arr);
void check_options(int x);
void print_all_solutions(int arr[], int idx, int x);

void print_solution(int *arr)
{
	for (int i = 0; i < N-1; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("%d", arr[N-1]);
	printf("\n");
}

void check_options(int x)
{
	int arr[N];
	print_all_solutions(arr, 0, x);
}

void print_all_solutions(int arr[], int idx, int x)
{
	int new_arr[N];
	int sum=0;
	
	if (idx == 0)
	{
		for (int i = 0; i < N; i++)
		{
			new_arr[i] = MIN_NUMBER_CUBE;
		}

		idx++;
		
		if (N*MIN_NUMBER_CUBE == x)
		{
			print_solution(new_arr);
		}

		for (int i = idx; idx <= N; idx++)
		{
			new_arr[idx - 1]++;
			print_all_solutions(new_arr, idx, x);
			new_arr[idx - 1]--;
		}
	}

	for (int i = 0; i < N; i++)
	{
		new_arr[i] = arr[i];
		sum += new_arr[i];
	}

	if (sum == x)
	{
		print_solution(new_arr);
	}

	else
	{
		for (int i = idx; idx <= N; idx++)
		{
			new_arr[idx - 1]++;
			if (new_arr[idx - 1] <= MAX_NUMBER_CUBE)
			{
				print_all_solutions(new_arr, idx, x);
			}
			new_arr[idx - 1]--;
		}
	}
}

void main()
{
	int max_cub;
	printf("This is a demo version of Exercise 2 from the exam\n");
	printf("Copyright Ofer Montano\n");
	printf("N (Number of toss) = %d \n",N);
	printf("Minimum number in the cube = %d \n", MIN_NUMBER_CUBE);
	printf("Maximum number in the cube = %d \n", MAX_NUMBER_CUBE);
	printf("--------------------------------------------------\n");
	printf("Please enter your gess: ");
	scanf("%d", &max_cub);
	printf("These are all the options to win: \n");
	check_options(max_cub);
	system("pause");
}
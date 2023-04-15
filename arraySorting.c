
#include <stdio.h>
#include <stdlib.h>

//---- Function Declarations -----
void sortAscending(int* ptr, int size);
void printArray(int* ptr, int size);
int compare(void*, void*);

void sortDescending(int* ptr, int size)
{
	printf("\nArray in descending order is\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (ptr[i] > ptr[j])
			{
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	printArray(ptr, size);
}

void sortAscending(int* ptr, int size)
{
	printf("Array in ascending order is\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (ptr[i] < ptr[j])
			{
				int temp = ptr[j];
				ptr[j] = ptr[i];
				ptr[i] = temp;
			}
		}
	}
	printArray(ptr, size);

}

void printArray(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ptr[i]);
	}
}

int compare(void*a, void*b)
{
	if ((*(int*)a) == (*(int*)b)) return 0;
	else if ((*(int*)a) > (*(int*)b)) return 1;
	else return -1;
}
int main()
{
	int (*op[2])(int*,int);
	int choice;
	int array[] = {2, 6, 7, 8, 9, 3, 1, 14, 15, 11, 16};
	op[0] = sortAscending;
	op[1] = sortDescending;

	printf("\nEnter 0 for ascending and 1 for descending choice: \n");
	scanf_s("%d", &choice);
	op[choice](array, (sizeof(array) / sizeof(int)));
	return 0;
}

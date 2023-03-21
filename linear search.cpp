#include<stdio.h>
#include<stdlib.h>
#define size 20
int main()
{
	int arr[size], i, num,n, pos = -1, found = 0;
	printf("enter size of array: ");
	scanf_s("%d", &n);
	printf("enter array elements: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("enter element to be searched: ");
	scanf_s("%d", &num);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			found = 1;
			pos = i;
			printf("\n%d is found in the array at position %d", num, i + 1);
			break;
		}
	}
	if (found == 0)
	{
		printf("%d does not exist in array", num);
	}
	return 0;
}
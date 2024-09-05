#include<stdio.h>
#include<string.h>

#define MAX 5

int main()
{
	int x = 99;
	int arr1[MAX] = {1,2};
	int arr2[] = {1,6,7,9,10,4,6,8,9,8 ,7 ,5 };
	int arr3[MAX];

	int index;
	int size = sizeof(arr2)/sizeof(int);

	printf("Elements of first array\n");
	for(index = 0; index < MAX; index++)
	{
		printf("%d  " ,arr1[index]);
	}
	printf("\n");

	printf("Elements of second array\n");
	for(index = 0; index < size;  index++)
	{
		printf("%d  " ,arr2[index]);
	}
	printf("\n");

	
	memset(arr3, 1, sizeof(arr3));
	
	printf("Elements of third  array\n");
	for(index = 0; index < MAX; index++)
	{
		
		printf("%d  " ,arr3[index]);
	}
	printf("\n\n");

	return 0;
}

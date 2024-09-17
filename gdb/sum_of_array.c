#include<stdio.h>

int main()
{

	int a[5] = { 1,4,6,7,8};

	int sum;

	for(int i=0; i<5; i++)
		sum+=a[i];
	printf("The sum is %d\n", sum);
	return 0;
}

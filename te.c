#include<stdio.h>

int  sum(int *a, int *b)
{
	int *result ;
	*result = *a + *b;
	return *result;
}
int main()
{
	int a =10;
	int b = 20;
	int *t;
	printf("The sum is %d\n", *t);
	return 0;
}

#include<stdio.h>

void test(int x)
{
	if(x != 0)
	{
		printf("Hello\n");
		test(--x);
	}
 printf("X is zero");
}

int main()
{
	test(5);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a ;
	int b ;
	int ret_val;
	
	printf("Enter two integer numbers\n");
	ret_val = scanf("%d%d", &a, &b);

	printf("No of inputs = %d\n", ret_val);

	ret_val = printf("The sum of %d and %d is %d\n", a,b, a+b);

	if (ret_val < 0)
	{
			printf("Error while printing\n");
			return EXIT_FAILURE;
	}
	printf("Success\n");
	return EXIT_SUCCESS;
}

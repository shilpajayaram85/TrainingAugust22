

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, result;
	int op;
	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n");
	printf("Enter your choice\n");
	scanf("%d", &op);
/*	switch(op)
	{
		case 1: result = a + b;
				break;
		case 2: result = a - b;
				break;
		case 3: result = a * b;
				break;
		default: result = 0;
				 printf("Invalid Choice\n");
	} */
	if(op == 1)
		result = a+b;
	else if(op == 2)
		result = a - b;
	else if(op == 3)
		result = a * b;
	else
		{
			result = 0;
			printf("Invalid choice, choose between 1 to 3\n");
		}
	printf("Result = %d\n", result);
	return EXIT_SUCCESS;
}

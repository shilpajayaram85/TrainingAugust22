#include<stdio.h>
#include<stdarg.h>


//vardic -- variable number os arguments


int sum(int count, ...);

int main()
{
	printf("The of 2 numbers %d\n",sum(2,3,8));

	printf("The of 3  numbers %d\n",sum(3,3,8,4));
	printf("The of 4 numbers %d\n",sum(4,3,8,1,4));
	printf("The of 5 numbers %d\n",sum(5,3,8,7,8,9));
	printf("The of 0 numbers %d\n",sum(0));
	return 0;
}
 

int sum(int count, ...)
{

	int i;
	int sum = 0;
	va_list args;
	
	va_start(args, count);


	for(i = 0; i < count; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);
	return sum;
}

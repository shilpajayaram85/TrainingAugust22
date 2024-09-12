#include<stdio.h>

int sum(int, int);
int sub(int, int);


int main()
{
	int x = 5, y = 7;


	int result ;

	result = sum(x,y);

	printf("SUm = %d\n",  result);

	result = sub(x, y);
	printf("Difference = %d\n" , result);
}


int sum(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;

}

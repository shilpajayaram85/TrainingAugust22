#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	printf("Number of arguments %d\n", argc);
	printf("Name of exe %s\n", argv[0]);
	
	if(argc < 3)
	{
		printf("Usage %s num1 num2 ....\n", argv[0]);
		return 1;
	}

	int sum = 0, i;
	for(i = 1 ; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("The sum of arguments = %d\n", sum);

//atoi  char* to int
//atof
//atod
//atol
//atoll

	

	return 0;
}

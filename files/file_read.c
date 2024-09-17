#include<stdio.h>

int main()
{
	FILE *fp = NULL;
	fp = fopen("test.txt", "w");
	int ret_val = 0;
	int num;
	if(fp == NULL)
	{
		printf("fopen() failed\n");
		return 1;
	}
	
	ret_val  = fscanf(fp, "%d", &num);
	if(ret_val == EOF)
	{
		printf("fscanf failed\n");
			
		ret_val = fclose(fp);

		if(ret_val != 0)
		{
			printf("fclose failed\n");
			return 1;
		}
		return 1;
	
	}
	printf("The num is %d", num);
	
	ret_val = fclose(fp);

	if(ret_val != 0)
	{
		printf("fclose failed\n");
		return 1;
	}
	return 0;

}

#include<stdio.h>


int copy_file(FILE * , FILE *);
int main()
{
	FILE *input, *output;

	input = fopen("input.txt", "r");
	
	output = fopen("output.txt", "w");

	int ret_val;

	ret_val = copy_file(input, output);
	if(ret_val !=0)
	{
		printf("copy failed\n");
		fclose(input);

		fclose(output);

		return 1;
	}


	fclose(input);

	fclose(output);

	
	
	return 0;
}

int copy_file(FILE * input, FILE *output)
{
	char file_char ='\0';

	while(1)
	{
		if(feof(input)!=0)
		{
			break;
		}
		file_char = (char)fgetc(input);
	/*	if(file_char == EOF)
		{	
			printf("fgetc failed");
			return 1;
		}*/

		fputc(file_char, output);
		
	}

	return 0;
}

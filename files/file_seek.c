#include<stdio.h>


int main()
{

	 FILE *fp = NULL;
	 fp = fopen("Sample.txt", "a");

	 printf("The current position is %d", ftell(fp));
	 fseek(fp, 5, SEEK_SET);
	 printf("The current position is %d", ftell(fp));
	 fprintf(fp,"Hello\n");
	 return 0;
}

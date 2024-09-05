
#include<stdio.h>
#include<string.h>

#define MAX 10  
int main()
{

	char str[ ]= "This is source string";
	char copiedstr[MAX];
	int len;

	//str= "Hello World";  Array can't be assigned using = 

	/*printf("Enter a string\n");
	
	fgets(str, MAX, stdin);
	len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';*/

	printf("Original String \n");
	puts(str);
	
	strncpy(copiedstr, str, MAX);	
	copiedstr[MAX-1] = '\0';

	printf("Original String \n");
	puts(str);
printf("\n\n");	
	printf("Copied String\n");
	puts(copiedstr);
printf("\n\n");
	
	printf("\n\n");

	return 0;
}

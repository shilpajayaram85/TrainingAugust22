#include<stdio.h>

#define MAX 5
int main()
{

	char ch[MAX];
//	char str[MAX];
	printf("Enter a string\n");
	scanf("%[^\n]s", ch);
//	scanf("%s",str);
	printf("The input string is %s", ch);
//	printf("The Second String is %s\n", str);
//	printf("\n\n");

	return 0;
}

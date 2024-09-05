
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score ;
	char grade;
	printf("Enter score  and Grade(A,B,C,D)\n");
	scanf("%d" , &score);
	scanf(" ");
	scanf(" %c" , &grade);
	printf("Your Score is %d and grade is %c\n", score,grade);
	return EXIT_SUCCESS;
}

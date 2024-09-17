#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p= (int *) malloc(10 * sizeof(int));
 free(p);
// free(p);
 return 0;
}

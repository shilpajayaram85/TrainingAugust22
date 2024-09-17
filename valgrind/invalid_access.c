// invalid_access.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int *)malloc(5 * sizeof(int));
    array[6] = 10; 
	printf("%d\n", array[6]);
	free(array); 
    return 0;
}

#include <stdlib.h>
#include <stdio.h>

void memory_leak() {

	int *ptr = (int *)malloc(10 * sizeof(int));
	int *p = (int *) malloc(5 * sizeof(int));
    // Memory allocated but not freed
	*ptr = 10;
	printf("%d\n", *ptr);
	free(ptr);
	free(p);
}

int main() {
    memory_leak();
    return 0;
}

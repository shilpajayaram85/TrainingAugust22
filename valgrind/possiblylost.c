#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void possibly_lost_example() {
    char *buffer = (char *)malloc(100 * sizeof(char));  // Allocating memory
    if (!buffer) {
        printf("Memory allocation failed\n");
        return;
    }
    
    strcpy(buffer, "This is a sample string");

    // Now reassign the pointer, losing the original reference
    buffer = realloc(buffer, 200 * sizeof(char));  // Increasing the size of memory

    // No longer using or freeing the previous allocated block
    strcpy(buffer, "Memory expanded and old memory reference is possibly lost");
	
	free(buffer);
    // Forgetting to free memory
}

int main() {
    possibly_lost_example();
    return 0;
}


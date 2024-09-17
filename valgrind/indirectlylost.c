#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
} Container;

void create_memory_leak() {
    // Allocate memory for a Container
    Container *container = (Container *)malloc(sizeof(Container));

    // Allocate memory for the data inside the Container
    container->data = (int *)malloc(10 * sizeof(int));

    // Simulate some operations on data
    for (int i = 0; i < 10; i++) {
        container->data[i] = i;
    }
	free(container->data);
	free(container);
}


int main() {
    create_memory_leak();

    // The program ends here
    return 0;
}

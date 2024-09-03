#include <stdio.h>

int main() {

    int x = 5;
    int y = 10;
    int z = 15;

    int a = x++ + ++y; 
	int b = --z - y--; 
    int c = x++ * --z;

    x = b++ + a--;     
    y = --b + --c;      
    z = x++ - --a + c--;

    printf("x = %d, y = %d, z = %d\n", x, y, z); 
    printf("a = %d, b = %d, c = %d\n", a, b, c); 

    return 0;
}


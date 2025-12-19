#include <stdio.h>

void swapNumbers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;  
    *y = temp;   
}

int main(void) {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

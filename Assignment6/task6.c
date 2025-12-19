#include <stdio.h>

void incrementByValue(int x) {
    x = x + 1;   
    printf("Inside incrementByValue: x = %d\n", x);
}

void incrementByReference(int *x) {
    *x = *x + 1;
    printf("Inside incrementByReference: x = %d\n", *x);
}

int main(void) {
    int num = 10;

    printf("Original value of num: %d\n", num);

    incrementByValue(num);
    printf("After incrementByValue: num = %d\n", num);

    incrementByReference(&num);
    printf("After incrementByReference: num = %d\n", num);

    return 0;
}

#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 31; 
    int *ptr1, *ptr2;         
    int sum;                    

    ptr1 = &num1;       
    ptr2 = &num2;        

    sum = *ptr1 + *ptr2;       

    printf("The sum of num1 and num2 is: %d\n", sum);

    return 0;
}

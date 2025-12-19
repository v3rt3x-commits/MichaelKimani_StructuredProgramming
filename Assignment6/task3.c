#include <stdio.h>

int main(void) {
    int count = 10;   
    int *pCount;           

    pCount = &count;    

    *pCount = 31;        

    printf("Updated value of count: %d\n", count);

    return 0;
}

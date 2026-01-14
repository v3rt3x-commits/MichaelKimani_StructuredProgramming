#include <stdio.h>

int main(){
    int n,i ,sum = 0;
    int arr[50];

    printf("Please enter the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Please enter %d elements of the array: \n", n);
    for(i = 0; i < n; i++){
        printf("Element -%d: ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum of all elements in the array is: %d\n", sum);

    return 0;
}
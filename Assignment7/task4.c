#include <stdio.h>

int main(){
    int n,i ;
    int arr[50];
    int max ;
    int min ;
    printf("Please enter the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Please enter %d elements of the array: \n", n);
    for(i = 0; i < n; i++){
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);
    return 0;
}
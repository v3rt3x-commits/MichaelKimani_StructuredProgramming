#include <stdio.h>

int main(){
    int n, i;
    int arr[50];

    printf("Please enter the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Please enter %d elements of the array: \n", n);
    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

    }
    printf("The elements of the array in reverse order are: \n");
    for(i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
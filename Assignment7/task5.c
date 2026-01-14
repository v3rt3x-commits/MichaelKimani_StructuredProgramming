#include <stdio.h>

int main() {
    int n , i , k , temp ;
    int arr[50];

    printf("Please enter the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Please enter %d elements of the array: \n", n);
    for(i = 0; i < n; i++){ 
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
   for(i = 0; i < n - 1; i++){
        for(k = i + 1 ; k < n ; k++){
            if(arr[i] > arr[k]){
                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
    printf("\nThe elements of the array in ascending order are: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0; 
}
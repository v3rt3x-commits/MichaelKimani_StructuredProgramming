#include <stdio.h>

int main(){
    int n , i , k, count;
    int arr[50];

    printf("Please enter the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Please enter %d elements of the array: \n", n);
    for(i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe unique elemennts in the array are: \n");
    for(i = 0; i < n; i++){
        count = 0;
        for(k = 0; k < n; k++){
            if(arr[i] == arr[k]){
                count++;
            }
        }
        if(count == 1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
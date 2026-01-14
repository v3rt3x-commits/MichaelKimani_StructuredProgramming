#include <stdio.h>

int main(){
    int n , i ,pos, val;
    int arr[50];
    printf("Please enter the size of the array: ");
    scanf("%d", &n); 
    
    printf("Please enter %d elements of the array in ascending order: \n", n);
    for(i = 0; i < n; i++){
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe current list of the array is: \n"); 
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nPlease enter the value to be inserted in the array: ");
    scanf("%d", &val);

    printf("Please enter the position to insert the value at: ");
    scanf("%d", &pos);

     pos = pos - 1;

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos]=val;
    n++;
    printf("\nThe new list of the array after insertion is: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
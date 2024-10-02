// Program to delete an element in an array
// #include <conio.h>
#include <stdio.h>

void main() {
    int arr[50];
    int i, n, pos;
    printf("Enter the no of element: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position is delete: ");
    scanf("%d", &pos);
    
    // Delete array number
    if(pos>n+1){
        printf("Deletion not posible\n");
    }else{
        for(i=pos-1; i<n-1; i++){
            arr[i] = arr[i+1];
        }
    }
    
    for(i=0; i<n-1; i++){
        printf("%d\n", arr[i]);
    }
}
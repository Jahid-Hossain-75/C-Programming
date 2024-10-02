// Program to show addition of 2 matrix
#include <stdio.h>

int main() {
    int a[2][3], b[2][3], c[2][3], i, j;
    
    // First array
    // row
    printf("Enter element of 1st Array:\n");
    for(i=0; i<2; i++){
        // column
        for(j=0; j<3; j++){
            printf("Row- %d, Column- %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Second array
    // row
    printf("\n\nEnter element of 2nd Array:\n");
    for(i=0; i<2; i++){
        // column
        for(j=0; j<3; j++){
            printf("Row- %d, Column- %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // calculation
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // output
    printf("\n\nOutput\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Row- %d, Column- %d: ", i, j);
            printf("%d\n", c[i][j]);
        }
    }
    
    return 0;
}
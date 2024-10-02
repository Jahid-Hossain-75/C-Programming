// 2D Array using nested for loop
#include <stdio.h>

int main() {
    int myarr[2][3], i, j;
    
    // row
    for(i=0; i<2; i++){
        // column
        for(j=0; j<3; j++){
            printf("Row- %d, Column- %d: ", i, j);
            scanf("%d", &myarr[i][j]);
        }
    }
    
    // output
    printf("\n\nOutput\n\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Row- %d, Column- %d: ", i, j);
            printf("%d\n", myarr[i][j]);
        }
    }
    
    return 0;
}
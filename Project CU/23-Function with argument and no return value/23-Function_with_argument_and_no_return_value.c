// Function with argument and no return value
#include <stdio.h>

void sum(int a, int b);
void main(){
    int i, j;
    printf("Enter value of i: ");
    scanf("%d", &i);
    printf("Enter value of j: ");
    scanf("%d", &j);
    sum (i, j);
}

void sum(int a1, int b1){
    int c1 = a1 + b1;
    printf("Sum: %d", c1);
}
// Function with argument and with return value 
#include <stdio.h>

int sum(int a, int b);
void main(){
    int i, j, result;
    printf("Enter i value: ");
    scanf("%d", &i);
    printf("Enter j value: ");
    scanf("%d", &j);
    result = sum(i, j);
    printf("%d",result);
}

int sum(int a1, int b1){
    int c1;
    c1=a1+b1;
    return c1;
}
// Function with no argument and a return value
#include <stdio.h>

int sum();
void main(){
    int result = sum();
    printf("Result %d", result);
}

int sum(){
    int a,b,c;
    printf("Enter firs value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    c = a+b;
    return c;
}
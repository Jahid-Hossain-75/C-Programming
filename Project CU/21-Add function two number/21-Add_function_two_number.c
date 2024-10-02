// Add function two number
#include <stdio.h>

void add();
int main() {
    add();
}

void add(){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c=a+b;
    printf("Sum: %d", c);
}
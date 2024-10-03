#include <stdio.h>
#include <conio.h>

int main(){
    // Swap two number without third variable
    int x, y;

    // input
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    // calculation
    x = x + y;
    y = x - y;
    x = x - y;

    // output
    printf("After swapping, x = %d\n", x);
    printf("After swapping, y = %d", y);

    return 0;
}
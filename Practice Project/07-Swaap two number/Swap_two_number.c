#include <stdio.h>

void main(){
    // Swap two number
    int var1 = 10, var2 = 20, temp;
    printf("Var1: %d\n", var1);
    printf("Var2: %d\n\n", var2);

    temp = var2;
    var2 = var1;
    var1 = temp;

    printf("After swapping:\n");
    printf("Var1: %d\n", var1);
    printf("Var2: %d\n", var2);

    return 0;
}
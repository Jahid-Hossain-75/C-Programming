#include <stdio.h>

int main(){
    int num1 = 20, num2 = 9;
    int result = num1 / num2;
    // convert int to float
    float f_result = (float) num1 / num2;

    printf("Result is = %d\n", result);
    printf("F Result is = %.2f\n", f_result);
    return 0;
}
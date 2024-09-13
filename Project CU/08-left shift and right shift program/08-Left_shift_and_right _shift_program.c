#include<stdio.h>

int main(){
    int num, shift_count, left_result, right_result;
    
    // user input
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the number off position to shift: ");
    scanf("%d", &shift_count);
    
    // left shift and right shift operation
    left_result = num << shift_count;
    right_result = num >> shift_count;
    
    // output
    printf("Left shift Result: %d << %d = %d\n", num, shift_count, left_result);
    printf("Right shift Result: %d >> %d = %d\n", num, shift_count, right_result);
    return 0;
}
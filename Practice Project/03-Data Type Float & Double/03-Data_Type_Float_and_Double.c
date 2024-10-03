#include<stdio.h>
int main(){
    float float_pi = 3.141592983471289444;
    double double_pi = 3.141592983471289444;
    
    // array
    float float_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double double_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Precision
    printf("Precision of Float: %.16f\n", float_pi); // float has 6 digit precision
    printf("Precision of Double: %.16f\n\n", double_pi); // double has 15 digit precision

    // size --- using sizeof function
    printf("Size of Float: %d Bytes\n", sizeof(float_pi)); // float - 4 bytes
    printf("Size of Double: %d Bytes\n\n", sizeof(double_pi)); // double - 8 bytes

    // array size --- using sizeof function
    printf("Array Size: %d Bytes\n", sizeof(float_arr)); // float - 4*size of array bytes
    printf("Array Size: %d Bytes\n", sizeof(double_arr)); // double - 8*size of array bytes
    
    return 0;
}
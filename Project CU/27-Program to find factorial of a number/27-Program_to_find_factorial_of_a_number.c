// Program to find factorial of a number.
#include <stdio.h>
int factorial(int number);
int main() {
    int x = 9;
    printf("The factorial of %d is %d\n", x, factorial(x));
    return 0;
}
int factorial(int number){
    if(number == 1){
        return(1);
    }else{
        return(number * factorial(number -1));
    }
}
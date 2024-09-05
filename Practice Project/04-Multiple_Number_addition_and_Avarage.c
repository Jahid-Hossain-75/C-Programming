#include <stdio.h>

// int main(){
//     int num1 = 20, num2 = 11, num3 = 10;
//     int sum = num1 + num2 + num3;

//     printf("Sum = %d\n", sum);
//     printf("Average = %.2f\n", (float)sum / 3);
//     return 0;
// }


void main(){
    // User Input: Multiple numbers addition and average number.
    int num1, num2, num3;
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    printf("Enter Third number: ");
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;
    float average = (float)sum / 3;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}
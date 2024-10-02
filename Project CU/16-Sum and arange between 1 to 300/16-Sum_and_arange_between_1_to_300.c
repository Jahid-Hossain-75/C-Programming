// Q: write a program to find sum and arange of iltges between 1 to 300 which are divisible by 7.

#include <stdio.h>

int main() {
    int i, sum=0, counter=0, avg=0;
    for(i=1; i<=300; i++){
        if(i%7==0){
            printf("%d\n",i);
            sum=sum+i;
            counter++;
        }
    }
    // print sum;
    printf("Sum: %d\n",sum);
    // print counter value.
    printf("counter: %d\n", counter);
    avg = sum/counter;
    // print avarage;
    printf("AVG: %d\n",avg);

    return 0;
}
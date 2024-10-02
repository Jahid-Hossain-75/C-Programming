// Program to find to average of an number using array
#include <stdio.h>

int main() {
    int mydata[5], i, sum = 0, avg;
    for(i=1; i<6; i++){
        printf("Enter %d value: ", i);
        scanf("%d",&mydata[i]);
    }
    
    for(int i=0;i<5;i++){
        sum += mydata[i];
    }
    
    avg = sum / 5;
    printf("Avarage: %d", avg);
    return 0;
}
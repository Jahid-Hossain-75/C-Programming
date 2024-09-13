// Online C compiler to run C program online
#include <stdio.h>
// 04-Goto Program
void main() {
    int Totalmarks;
    printf("Enter Your Mark: ");
    scanf("%d", &Totalmarks);
    if(Totalmarks >= 50){
        goto Pass;
    }else{
        goto Fail;
    }

    Pass:
    {
        printf("\n Congratulation! You made it.\n");
        return;
    }
    Fail:
        printf("\n Better Luck Next Time \n");
        return;
}
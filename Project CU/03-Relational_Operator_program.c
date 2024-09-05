#include<stdio.h>
int main(){
    // relational operator program
    int a,b,c;
    printf("Enter First numbers: ");
    scanf("%d",&a);
    printf("Enter Second numbers: ");
    scanf("%d",&b);
    printf("Enter Third number: ");
    scanf("%d",&c);

    printf("%d == %d is %d\n", a,b,a==b);
    printf("%d == %d is %d\n", a,c,a==c);
    printf("%d > %d is %d\n", a,b,a>b);
    printf("%d > %d is %d\n", a,c,a>c);
    printf("%d < %d is %d\n", a,c,a<b);
    return 0;
}
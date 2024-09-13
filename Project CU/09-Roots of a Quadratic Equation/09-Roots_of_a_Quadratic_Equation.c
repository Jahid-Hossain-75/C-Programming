#include<stdio.h>
#include <math.h>

int main(){
    int a,b,c, discriminant, root1, root2;
    
    // user input
    printf("Enter coefficien a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // calculation
    discriminant = b*b-4*a*c;
    
    // condition & output
    if(discriminant < 0){
        printf("No real roots\n");
    }else if(discriminant == 0){
        root1 = -b/(2*a);
        printf("One real root: %.2lf\n", root1);
    }else{
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b+sqrt(discriminant))/(2*a);
        printf("Two real roots: %.2lf and %.2lf\n", root1, root2);
    }
    return 0;
}
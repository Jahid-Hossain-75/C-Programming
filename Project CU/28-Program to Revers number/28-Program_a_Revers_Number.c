// Revers number
#include <stdio.h>

int main() {
    int n, revers=0, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while(n!=0){
        rem=n%10;
        revers=(revers*10)+rem;
        n/=10;
    }
    printf("Revers Number: %d", revers);
    return 0;
}
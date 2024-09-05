// Online C compiler to run C program online
#include <stdio.h>
int main() {
    // 06-Switch Statement-vowel & consonent
    char c;
    printf("Enter a any Key: ");
    scanf("%c",&c);
    switch(c){
        case'a':
            printf("A is a vowel.");
            break;
        
        case'e':
            printf("E is a vowel.");
            break;
        
        case'i':
            printf("i is a vowel.");
            break;
        
        case'o':
            printf("O is a vowel.");
            break;
        
        case'u':
            printf("U is a vowel.");
            break;
        
        default:
            printf("%c is a Consonent.", c);
    }
    return 0;
}
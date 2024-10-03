#include <stdio.h>

void main(){
    // integer types modified
    short s;
    long int li;
    long long int lli;

    // output
    printf("Short %d\n", sizeof(s)); // Short 2 bytes or 16 bits. Range: -32,768 to 32,767
    printf("Long int %d\n", sizeof(li)); // Long int: 4 bytes or 32 bits. range = -2,147,483,648 to 2,147,483,647
    printf("Long Long int %d\n", sizeof(lli)); // Long long int: 8 bytes or 64 bits. range = -9,223,372,036,854,775,808 to 9,223,372,036,854,775,808
    
}
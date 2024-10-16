// Initialize of pointer.
#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p=&a;
    printf("Address stored in a variable p is:%x\n", p);
    printf("Value stored in a variable p is:%d\n", *p);

    return 0;
}
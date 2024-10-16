// Write a program to read an array of elements and print the same in the reverse order along with their addresses.
#include <stdio.h>

int main() {
    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    for(int i=9; i>=0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;
}
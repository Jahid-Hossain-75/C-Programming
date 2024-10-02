// simple string program
#include <stdio.h>
#include <string.h>
void main() {
    char name[30];
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    // printf("My name is %s", name);
    printf("My name is ");
    puts(name);
}
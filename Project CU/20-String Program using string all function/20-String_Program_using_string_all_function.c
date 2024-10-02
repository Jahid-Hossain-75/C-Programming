// String Program using string all function
#include <stdio.h>
#include <string.h>
void main() {
    char name1[30];
    char name2[30] = "Language";
    // strcpy
    strcpy(name1, "C Programming ");
    // output - name1 and name2
    printf("%s\n", name1);
    printf("%s\n\n", name2);
    
    // check the variable are equal or not equal
    if(strcmp(name1, name2) == 0){
        printf("String are Equal.\n\n");
    }else{
        printf("String not Equal!\n\n");
    }
    
    // strcat
    strcat(name1, name2);
    // output name1
    printf("%s\n", name1);
    // length
    int length = strlen(name1);
    printf("Total Length: %d\n\n", length);
    
    
    
}
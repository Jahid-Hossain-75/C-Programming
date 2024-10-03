#include <stdio.h>

void main(){ 
    // User input program

    // ========= Program-1 ============
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // output
    printf("Age: %d\n", age);
    
    // line break - optional
    printf("\n\n\n\n\n");



    // ====== Program-2 =========
    int bookId, quantity;
    float price;
    char format;
    char name[50];

    // input format
    printf("Format: ");
    scanf("%c", &format);

    // input bookId
    printf("Book ID: ");
    scanf("%d", &bookId);

    // input quantity
    printf("Quantity: ");
    scanf("%d", &quantity);

    // input price
    printf("Price: ");
    scanf("%f", &price);

    // input name
    printf("Name: ");
    scanf("%s", &name);

    // Output
    printf("\n\nOutput\n\n");
    printf("Format: %c\n", format);
    printf("Bood Id: %d\n", bookId);
    printf("Quantity: %d\n", quantity);
    printf("Quantity: %f\n", price);
    printf("Name: %s\n", name);


    return 0;
}
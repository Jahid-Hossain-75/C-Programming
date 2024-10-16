// swap two numbers using - call by refarence value
#include <stdio.h>
void swap (int *, int *);
int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    printf("\nBefore Swapping:");
    printf("\na = %d\nb = %d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\nAfter Swapping:");
    printf("\nx = %d\ny = %d\n\n", *x,*y);
    
}
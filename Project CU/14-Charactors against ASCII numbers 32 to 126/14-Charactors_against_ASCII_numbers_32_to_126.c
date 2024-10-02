// Q: write a program to print character against ASCII number 32 to 126.
#include<stdio.h>
int main ()
{
  int i;
  for(i=32; i<=126; i++){
      printf("ASCII %d: %c\n", i, (char)i);
  }
  return 0;
}
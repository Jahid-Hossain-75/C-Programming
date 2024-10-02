// Q: write a program to print charactors against ASCII numbers.
#include<stdio.h>
int main ()
{
  char c;
  printf ("Enter the Character = ");
  scanf ("%c", &c);
  printf ("\nThe ASCII Value of %c = %d", c, c);
  return 0;
}
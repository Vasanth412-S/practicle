

#include<stdio.h>
void f1 (int a, int b)
{
  int c;
  c=a; a=b; b=c;
}
void f2 (int *a, int *b)
{
  int c;
  c=*a; *a=*b;*b=c;
}
int main()
{
  int a=4, b=5, c=6;
  f1(a, b);
  f2(&b, &c);
  printf ("%d", c-a-b);
  return 0;
}

/*The function call to to f1(a, b) won’t have any effect as the values are passed by value.

The function call f2(&b, &c) swaps values of b and c. So b becomes 6 and c becomes 5. Value of c-a-b becomes 5-4-6 which is -5.*/
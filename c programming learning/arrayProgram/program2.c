// program for checking call by reference using double pointer
// dated on 14/12/2023

#include<stdio.h>
 int disp(int* n);
 //int show(int* m);
int main()
{
    int i;
    int marks[]={56,56,45,57,33,43,89};
    for(i=0;i<=6;i++)
        disp(&marks[i]);

}
  int disp(int* n)
 {
    show(&n);
    return 0;
 }
 /*int show(int* m)
{
    printf("%d \n",*m);
    return 0;
}*/
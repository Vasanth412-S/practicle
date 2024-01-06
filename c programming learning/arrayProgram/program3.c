#include<stdio.h>
int main()
{
    int i;
    int num[]={24,32,12,44,56,17};

    for(i=0;i<=6;i++) 
    {
        printf("output:%d %d \n",*(i+num),i[num]);
    }
    return 0;
}
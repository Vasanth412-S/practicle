/* else if demo*/
#include<stdio.h>
int main(void)
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter the 5 number:\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/5;

    if(per>=60)
        printf("first division");
    else if(per>=50)
        printf("second division");
    else if(per>=40)
        printf("third division");
    else
        printf("fail");
    return 0;
}
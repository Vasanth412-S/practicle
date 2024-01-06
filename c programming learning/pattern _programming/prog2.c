// hollow square star pattern
// dated : 26/12/2023

#include<stdio.h>
int main()
{
    int num, i, j;
    printf("enter the number of n value:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if (i==0 || i==num-1 || j==0 || j==num-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }
    return 0;
}
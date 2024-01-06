// rectangle star pattern 
// dated : 26/12/2023

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n+1;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
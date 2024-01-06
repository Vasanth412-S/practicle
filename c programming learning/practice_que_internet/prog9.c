// array program to reverse order
#include <stdio.h>
int main()
{
    int arr[100];
    int i;
    int limit;
    printf("how many number your going to enter: ");
    scanf("%d",&limit);
    printf("now enter the number:\n");

    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    // for reverse order 
    for(i=limit-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    
    }
    return 0;

}
// checking how ptr[i] and *(ptr + i );

#include <stdio.h>
int main()
{
    int var[3]={1,2,3};
    int* p;
    p=var;

    for(int i=0; i<3; i++)
    {
       // printf("%d ",var[i]);
       // printf("%d ",p[i]);
       // printf("%d ",*(p+i));
        printf("%d ",*(var+i));
    }
return 0;
}
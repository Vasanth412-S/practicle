#include<stdio.h>
int main()
{
    char name[]="prepinsta";
    printf("%s \n",name);
    printf("%20s \n",name);
    printf("%20.5s \n",name);
    printf("% -20.5s \n",name);
    printf("%5s",name);

    return 0;

}
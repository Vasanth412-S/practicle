/* about &arr and arr in array*/

 #include<stdio.h>
 int main(void)
 {
    int arr[5]={1,2,3,45,5};
   //printf("%d %d\n",&arr,&arr+1);
   // printf("%d %d %d %d %d ",arr,arr+1,arr+2,arr+3,arr+4,arr+5);
   printf("%d %d \n",&arr,&arr+1);
   printf("%d %d\n",arr,arr+1);
   printf("%d %d %d \n", arr,arr[0]+3,arr[1]+3);
   
   
    return 0;
 }



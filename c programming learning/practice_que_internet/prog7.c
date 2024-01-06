// c program to demonstrate
// example of strlen() function.
 /*#include <stdio.h>
#include <string.h>
 
int main()
{
    // defining string
    char str[] = "GeeksforGeeks";
 
    // getting length of str using strlen()
    int length = strlen(str);
    printf("Length of string is : %d", length);
 
    return 0;
}*/


#include <stdio.h>
#include <string.h>
 
 int main()
 {
    char source[]="hello";
    char target[]=" world";
    
     
    strcat(source, target);
   printf("%s",source);
   return 0;


 } 
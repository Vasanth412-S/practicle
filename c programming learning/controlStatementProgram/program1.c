// This is my own program for finding prime number for given number 
//  dated 19/10/2023
 
/*A number greater than 1 is called a prime number, if it has exactly two factors, namely 1 and the number itself.*/

#include <stdio.h>
int main ()
{                                                        
    int a ,prime;                         
    printf("Enter the number: \n");       
    scanf("%d",&a);                       

    prime = a % 2;                        
    if (prime == 1)
        printf("%d is a prime number",a);
    else if (prime == 0)
        printf("%d is not a prime number",a);
    return 0;
}


// This programm is in book for prime number finding 
// dated 19/10/2023

#include <stdio.h>
int main (void)
{
    int num,i;
    printf("Enter a number ");
    scanf("%d",&num);

    i=2;
    while (i<=num-1)
    {
        if (num %i == 0)
        {
            printf("not a prime number ");
            break;
        }
        i++;

    }

    if (i == num)
        printf("Prime number");
    
}
// factorial for number both format
 
 #include <stdio.h>

int factorial(int fact);

int main()
{
    int fact ;
    int  result_of_fact;
    printf("enter the number that you want to calculate the factorial : ");
    scanf("%d",&fact);
    result_of_fact=factorial(fact);
    printf(" the output of factorial %d", result_of_fact);

    return 0;
}

 int factorial(int fact)
    {
      int i;
      int f=1;
      for( i=fact ; i>=1 ; i--)
      {
      f=f*i;
      }
        return (f);
    } 

    

   /*#include <stdio.h>

// Function declaration or prototype (before main)
int factorial(int fact);

int main() {
    int fact = 3;
    int result_of_fact;
    result_of_fact = factorial(fact);
    printf("The output of factorial %d", result_of_fact);

    return 0;
}

// Function definition (after main)
int factorial(int fact) {
    int i;
    int f = 1;
    for (i = fact; i >= 1; i--) {
        f = f * i;
    }
    return f;
}
*/
    

    
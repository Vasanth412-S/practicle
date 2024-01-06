#include<stdio.h>
 void main()
{
    int i=0;
    while(i<10)
        ;
    {
        printf("%d\n",i);
        i=i+1;

    }
}
/*There's a while loop that is meant to run while the value of i is less than 10.
 However, there's an unintended semicolon (;) immediately after the while loop's opening parenthesis. 
This semicolon creates an empty statement, essentially making the loop a "busy-wait" loop with no actual loop body.
Because of the semicolon right after the while loop's opening parenthesis, the loop effectively does nothing but 
repeatedly checks if i is less than 10 and immediately exits. As a result, the code will enter an infinite loop,
 causing the printf() statement and the increment of i to never be executed.*/




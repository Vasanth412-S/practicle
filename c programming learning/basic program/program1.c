// This all question are taken from prepinsta



#include<stdio.h>
int main()
{
    int integer =1;
    printf("%d %d %d", integer++,integer++,integer++);                          //OUTPUT: 3 2 1
    return 0;
}




#include <stdio.h>

int main()
{
    printf("%d",main);
}

 //OUTPUT : Address of main 



#include<stdio.h>

int main()
{
    printf("Paneer ");
    main();
    return 0;
}

/*When the program starts running

The first call to main prints "Paneer " to the console.
However, immediately after that, the second call to main is made inside the first call. 
This leads to another "Paneer " being printed.
The second call to main also results in a third call, leading to more "Paneer " being printed.
This process continues indefinitely, causing an infinite loop of recursive function calls.
The program will keep printing "Paneer " and calling main until it eventually consumes all available stack space 
due to the accumulation of function call frames. At that point, the program will likely crash or terminate due to a
stack overflow error.

In summary, the program is an example of infinite recursion, where the main function repeatedly calls
 itself without any termination condition. It's not a practical or meaningful program, but rather a demonstration
  of how recursion can lead to unexpected behavior when not properly controlled.
  */






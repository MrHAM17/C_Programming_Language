#include <stdio.h>

//// ITERATION  means doing a certain task ( without calling a same function repetadely ) by using loops or conditional statements...

int main()
{
    int n, i, f;
    i = f = 1;
    printf("\nEnter the number whose factorial yo want.\n");
    scanf("%d", &n);
    
   // printf("The value of factorial of %d is %d", n, f); 

   //////////////// WE CAN NOT WRITE THIS LINE HERE.
   /////////////// IF WE DO THAN PREVIOUS VALUE OF "f" WILL print that is 1.
   /////////////// and program will stop because their is not any thing to execute for user. 
   // even their is coder's logic

    for (i = 1; i <= n; i++)
    {
        f *= i;
    }

    printf("The value of factorial of %d is %d. \n\n", n, f); // here is correct time to execute this line....

    return 0;
}

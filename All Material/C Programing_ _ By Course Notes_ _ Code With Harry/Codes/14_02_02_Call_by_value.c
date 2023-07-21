/*Passing Parameter to a Function:
In C Programming we have different ways of parameter passing schemes such as
Call by Value and Call by Reference.
Function is good programming style in which we can write reusable code that can
be called whenever require.
Whenever we call a function then sequence of executable statements gets executed.
We can pass some of the information to the function for processing called
argument.*/

/*Call by Value:

In case of call by value the function is invoked by a calling function, by passing
the actual values to be processed.
This method copies the value of an argument into the formal parameters of the
function.
By default, C programming language uses call by value method to pass arguments.
In general, this means that code within a function cannot alter the arguments used
to call the function.
In this method, the changes made to parameter have no effect on the argument. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, ans;
    int sum(int x, int y);
printf("Enter Two Values:\n"); 
scanf("%d%d", &a, &b) ;
ans=sum(a,b) ;
printf("sum=%d",ans);
return 0;
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    return (z);
}
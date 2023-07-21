//Call by Reference :

/*In case of call by reference the function is invoked by a calling function, by
passing the address of the actual values to be processed.
In this method, the address of an argument is copied in the parameter.
Inside the sub routine; the address is used to access the actual argument in the call. */

#include <stdio.h>
#include <conio.h>
     
int main()
{
    int i, j;
    int swap(int *x, int *y);
    i = 10;
    j = 20;
    swap(&i, &j);
    printf("%d %d", i, j);
    return 0;
}
int swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
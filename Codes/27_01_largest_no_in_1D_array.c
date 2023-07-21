#include <stdio.h>
int main()
{
    int num;
    int arr[25];
    int large_num=0;

    // Asking for input
    printf("Please enter total no. of elements[1 to 25]: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i)
    {
        printf("%d.Enter the number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; ++i)
    {
        if (large_num < arr[i])
        {
            large_num= arr[i];
        }
    }
    printf("Largest element of the array is: %d", large_num);
    return 0;
}
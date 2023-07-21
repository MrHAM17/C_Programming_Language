#include <stdio.h>

// HERE WE CREATE ON THE SPOT ARRAY WHOSE SIZE will THE USER DECIDE.....&
// giving respective output WITH THE HEIL OF THAT.........SEPRATE_FUNCTION...........
// SO NO WASTAGE OF MEMORY......

int number, positive_no, negative_no, null, i = 0;
int main()
{
    printf("How many numbers you wish to store ?\n");
    scanf("%d", &number);
    printf("\n");

    int data[number];
    for (i = 0; i < number; i++)
    {
        printf("***** Enter the number %d ***** \n\t", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nYou have entered %d numbers.\n", number);
    printf("Among those positive integers are %d.\n", POSITIVE_NO(data, number));
    printf("As well as the negative integers are %d.\n", NEGATIVE_NO(data, number));
    for (i = 0; i < number; i++)
    {
        if (data[i] == -0 || data[i] == +0 || data[i] == 0)
        {
            printf("And remaining numbers are zeros, that is %d times you entered.", NULL_NO(data, number));
        }
    }

    /////////////////// FOR TO USE THIS LINE : COMMENT OFF THIS LINE 30 to 37, COMMENT OUT LINE 22 to 28 & LINE 63 TO 73
    // for (i = 0; i < number; i++)
    // {
    //     if (data[i] == -0 || data[i] == +0 || data[i] == 0)
    //     {
    //         null = null + 1;
    //     }
    // }
    // printf("And remaining numbers are zeros, that is %d times you entered.",null);
    return 0;
}

int POSITIVE_NO(int *data, int num)
{
    for (i = 0; i < num; i++)
    {
        if (data[i] == -0 || data[i] == +0 || data[i] == 0)
        {
            positive_no = positive_no + 0;
        }
        if (data[i] > 0 || -0 || +0)
        {
            positive_no = positive_no + 1;
            printf("%d", data[i]);
        }
    }
    return positive_no;
}

int NEGATIVE_NO(int *data, int num)
{
    for (i = 0; i < num; i++)
    {
        if (data[i] == -0 || data[i] == +0 || data[i] == 0)
        {
            negative_no = negative_no + 0;
        }
        if (data[i] < 0)
        {
            negative_no = negative_no + 1;
            printf("%d", data[i]);
        }
    }
    return negative_no;
}

int NULL_NO(int *data, int num)
{
    for (i = 0; i < num; i++)
    {
        if (data[i] == -0 || data[i] == +0 || data[i] == 0)
        {
            null = null + 1;
        }
    }
    return null;
}

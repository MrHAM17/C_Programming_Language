#include <stdio.h>

// HERE WE CREATE ON THE SPOT ARRAY WHOSE SIZE will THE USER DECIDE.....&
// giving respective output WITH THE HEIL OF THAT.........ARRAY_ONLY...........
// SO NO WASTAGE OF MEMORY......
int main()
{
    int number, i = 0;
    printf("How many numbers you wish to store ?\n");
    scanf("%d", &number);
    printf("\n");

    int data[number];
    for (i = 0; i < number; i++)
    {
        printf("***** Enter the number %d ***** \n\t", i + 1);
        scanf("%d", &data[i]);
    }

    // while (i < number)
    // {
    //     printf("***** Enter the number %d ***** \n", i + 1);
    //     scanf("%d", &data[i]);
    //     i++;
    // }

    int positive_no = 0, negative_no = 0,null=0;
    for (i = 0; i < number; i++)
    {
        if (data[i] == -0 || data[i] == +0 || data[i] == 0)
        {
            positive_no = positive_no + 0;
            negative_no = negative_no + 0;
            null=null+1;
        }
        else
        {
            if (data[i] > 0)
            {
                positive_no = positive_no + 1;
            }
            else
            {
                negative_no = negative_no + 1;
            }
        }
    }

    printf("\nYou have entered %d numbers.\nAmong those,positive integers are %d.\nAs well as the negative integers are %d.\n", number, positive_no, negative_no);
    if (null>0)
    {
       printf("And remaining numbers are zeros, that is %d times you entered.",null/2);
    }
    
    return 0;
}

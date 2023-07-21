//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// THIS CODE IS SUPER AWESOME_-_-_-_-_-_-_-_-_-_-_-_THIS CODE IS MOST PERFECT :: FOR TO SHOW NUMBER ENTER BY USER IS POSITIVI,NEGATIVE OR ZERO & RESPECTIVELY DISPLAY THAT/THOSE NUMBERS/NUMBERS..........


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////   TOTAL LINE 35O:: EMPTY & COMMENT LINES 69  ////////////////////////////////////////////////


#include <stdio.h>
int number, positive_no, negative_no, null, i, j, k;
int Zeroes_Checker = 0, Positive_Checker = 0, Negative_Checker = 0;

int main()
{
    printf("How many numbers you wish to store ?\n");
    scanf("%d", &number);
    printf("\n");
    if (number == 0)
    {
        printf("Ok.\nSo, you have not to store any data.\nFine.\nHave a great day!");
        return 0;
    }

    int data[number];
    for (i = 0; i < number; i++)
    {
        printf("***** Enter the number %d ***** \n\t", i + 1);
        scanf("%d", &data[i]);
    }

    ////////////////////////////// CASE A :: FOR ONLY ONE NUMBER /////////////////////////////

    if (number == 1)
    {
        printf("\nYou have entered 1 number.\n");

        for (i = 0; i < number; i++)
        {
            if (data[i] == -0 || data[i] == +0 || data[i] == 0)
            {
                printf("Which is zero.");
                return 0;
            }

            if (data[i] > 0)
            {
                // printf("Which is positive integer,that is %d\n", data[i]);
                printf("That is %d.\n", data[i]);
                return 0;
            }
            else
            {
                // printf("Which is negative integer,that is %d\n", data[i]);
                printf("That is %d.\n", data[i]);
                return 0;
            }
        }
    }

    ////////////////////////////// CASE B :: FOR MORE THAN ONE NUMBERS /////////////////////////////

    else
    {
        printf("\nYou have entered %d numbers.\n", number);

        for (i = 0; i < number; i++)
        {
            if (data[i] == -0 || data[i] == +0 || data[i] == 0)
            {
                Zeroes_Checker = Zeroes_Checker + 1;
            }
            if (data[i] > 0)
            {
                Positive_Checker = Positive_Checker + 1;
            }
            if (data[i] < 0)
            {
                Negative_Checker = Negative_Checker + 1;
            }
        }

        ///////////////////////////// CASE 0 /////////////////////////////

        ///////// FROM TOTAL NUMBERS,IF ANY ONE TYPE OF NUMBER IS ZERO;THEN

        //////////// LINE 84 TO 87 CAN NOT USE DIRECTLY :: SO WE HAVE TO USE EVERY WHERE.............PERFECTLY

        if (Positive_Checker == 0)
        {
            printf("\nAmong those positive numbers are 0.\n");
        }
        // if (Negative_Checker == 0)
        // {
        //     printf("\n But the negative numbers are 0.\n");
        // }

        ///////////////////////////// CASE 1 /////////////////////////////

        //////// IF ALL NUMBERS ARE ZERO;THEN
        if (Zeroes_Checker == number)
        {
            printf("\nAnd also the negative numbers are 0.\n");
            printf("\nSo, all numbers are zeros, that are %d times you entered.", number);
            return 0;
        }

        ///////////////////////////// CASE 2 /////////////////////////////

        //////// IF ALL NUMBERS ARE POSITIVE;THEN
        if (Positive_Checker == number)
        {
            printf("\nAnd all numbers are positive.");
            printf("\n\tThose are:");
            for (i = 0; i < number; i++)
            {
                if (data[i] > 0)
                {
                    printf("\t%d,", data[i]);
                }
            }
            printf("etc.\n");
            return 0;
        }

        ///////////////////////////// CASE 3 /////////////////////////////

        //////// IF ALL NUMBERS ARE NEGATIVE;THEN
        if (Negative_Checker == number)
        {
            printf("\nAnd all numbers are negative.");
            printf("\n\tThose are:");
            for (i = 0; i < number; i++)
            {
                if (data[i] < 0)
                {
                    printf("\t%d,", data[i]);
                }
            }
            printf("etc.\n");
            return 0;
        }

        ///////////////////////////// CASE 4 /////////////////////////////

        //////// IF ONLY ONE NUMBERS IS POSITIVE & OTHER ONE IS NEGATIVE OR ZERO and VICE VERSA;THEN

        if (Positive_Checker == 1) // FOR TO FIND POSITIVE NUMBER.......
        {
            printf("\nAmong those positive number is 1.");
            for (i = 0; i < number; i++)
            {
                if (data[i] > 0)
                {
                    printf("\n\tThat is:\t%d,", data[i]);
                }
            }
            printf("etc.\n");
        }

        /////////////////// CASE 4.1 ////////
        ////////////////////// THHI CASE COMES UNDER CASE 4 AS WELL AS CASE 4.1 ALSO.........

        if (Negative_Checker == 1) // FOR TO FIND NEGATIVE NUMBER.......
        {
            if (Positive_Checker > 0)
            {
                if (Positive_Checker > 1)
                {
                    for (i = 0; i < number; i++) // FOR TO FIND POSITIVE NUMBER.......
                    {
                        if (data[i] > 0)
                        {
                            printf("\nAmong those positive numbers are %d.\n", POSITIVE_NO(data, number));
                            printf("\tThose are:");
                        }
                    }
                    for (i = 0; i < number; i++)
                    {
                        if (data[i] > 0)
                        {
                            printf("\t%d,", data[i]);
                        }
                    }
                    printf("etc.\n");
                }
                printf("\nAs well as the negative number is 1.");
                for (i = 0; i < number; i++)
                {
                    if (data[i] < 0)
                    {
                        printf("\n\tThat is:\t%d,", data[i]);
                    }
                }
                printf("etc.\n");
                for (i = 0; i < number; i++) //////// OUT OF TOTAL, IF (SINGLE NUMBER||or||MANY NUMBERS) ARE ZERO;THEN
                {
                    if (data[i] == -0 || data[i] == +0 || data[i] == 0)
                    {
                        if (Zeroes_Checker == 1)
                        {
                            printf("\nAnd remaining number is zero, that is 1 times you entered."); // OUT OF TOTAL, IF ONE NUMBERS IS ZERO;THEN
                            return 0;
                        }
                        printf("\nAnd remaining numbers are zeros, that is %d times you entered.", NULL_NO(data, number)); // OUT OF TOTAL, IF MANY NUMBERS ARE ZEROES;THEN
                    }
                }
                return 0;
            }
            else
            {
                printf("\nBut the negative number is 1.");
                for (i = 0; i < number; i++)
                {
                    if (data[i] < 0)
                    {
                        printf("\n\tThat is:\t%d,", data[i]);
                    }
                }
                printf("etc.\n");
                for (i = 0; i < number; i++) //////// OUT OF TOTAL, IF (SINGLE NUMBER||or||MANY NUMBERS) ARE ZERO;THEN
                {
                    if (data[i] == -0 || data[i] == +0 || data[i] == 0)
                    {
                        if (Zeroes_Checker == 1)
                        {
                            printf("\nAnd remaining number is zero, that is 1 times you entered."); // OUT OF TOTAL, IF ONE NUMBERS IS ZERO;THEN
                            return 0;
                        }
                        printf("\nAnd remaining numbers are zeros, that is %d times you entered.", NULL_NO(data, number)); // OUT OF TOTAL, IF MANY NUMBERS ARE ZEROES;THEN
                    }
                }
                return 0;
            }
        }

        ///////////////////////////// CASE 5 /////////////////////////////

        //////// OUT OF TOTAL, IF FEW NUMBERS ARE POSITIVE, FEW ARE NEGATIVE OR ZEROES and VICE VERSA;THEN

        if (Positive_Checker > 1)
        {
            for (i = 0; i < number; i++) // FOR TO FIND POSITIVE NUMBER.......
            {
                if (data[i] > 0)
                {
                    printf("\nAmong those positive numbers are %d.\n", POSITIVE_NO(data, number));
                    printf("\tThose are:");
                }
            }
            for (i = 0; i < number; i++)
            {
                if (data[i] > 0)
                {
                    printf("\t%d,", data[i]);
                }
            }
            printf("etc.\n");
        }
        if (Negative_Checker > 1)
        {
            for (i = 0; i < number; i++) // FOR TO FIND NEGATIVE NUMBER.......
            {
                if (data[i] < 0)
                {
                    printf("\nAs well as the negative numbers are %d.\n", NEGATIVE_NO(data, number));
                    printf("\tThose are:\t");
                }
            }
            for (i = 0; i < number; i++)
            {
                if (data[i] < 0)
                {
                    printf("%d,", data[i]);
                }
            }
            printf("etc.\n");
        }

        ////////////////// CASE 0........ CALLING CASE 0 AGAIN(AS DISCUSSEDD EARLIER)

        if (Negative_Checker == 0)
        {
            printf("\nBut the negative numbers are 0.\n");
        }

        ////////////// FOR CASE 4 & CASE 5 : COMMON LOGIC FOR TO COUNT ZEROES.........IS BELOW.........
        for (i = 0; i < number; i++) //////// OUT OF TOTAL, IF (SINGLE NUMBER||or||MANY NUMBERS) ARE ZERO;THEN
        {
            if (data[i] == -0 || data[i] == +0 || data[i] == 0)
            {
                if (Zeroes_Checker == 1)
                {
                    printf("\nAnd remaining number is zero, that is 1 times you entered."); // OUT OF TOTAL, IF ONE NUMBERS IS ZERO;THEN
                    return 0;
                }
                printf("\nAnd remaining numbers are zeros, that is %d times you entered.", NULL_NO(data, number)); // OUT OF TOTAL, IF MANY NUMBERS ARE ZEROES;THEN
            }
        }
    }
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

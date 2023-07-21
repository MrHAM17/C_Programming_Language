 #include <stdio.h>   

// THIS CODE IS SIMPLE AS IT TAKES ONLY 4 VALUES FROM USER OMLY........................................


///     This for INT DATA TYPE.....////////////
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a,b,c,d;
   ///////////// int G1 = 0, G2 = 0, G3 = 0;

      printf("Enter the firet number \n");
    scanf("%d",&a);

    printf("Enter the second number \n");
    scanf("%d",&b);

    printf("Enter the third number\n");
    scanf("%d",&c);

    printf("Enter the fourth number\n");
    scanf("%d",&d);

    /////////////////////////////////////////from line 41 to 75 plus line 22 this is wrong way to code to find gratest number.//////////////   //comparing first two numbers.......
    //////////////////////////////////////// ACTUALLY LOGIC OF THOSE LINES ARE I TRIED FIRST BUT THAT IS FAILED.  SO PLEAE NOTE THAT..//////

    //     if (num_1 > num_2    )
    //     {
    //        G1 = num_1;

    //     }
    //     else
    //     {
    //         G1 = num_2;
    //     }

    //    //comparing second two numbers.......

    //     if (num_3 > num_4)
    //     {
    //          G2 = num_3;
    //     }
    //     else
    //     {
    //        G2 = num_4;
    //     }

    //     // comparing number betwwen first and second ......

    // if (G1 > G2)
    //     {
    //          G3 = G1;
    //     }
    //     else
    //     {
    //        G3 = G2;
    //     }

    int left_max = max(a,b);
    int right_max = max(c,d);
    int final_max = max(left_max, right_max);

    printf("The gratest number is %d \n", final_max);

   return 0;
}

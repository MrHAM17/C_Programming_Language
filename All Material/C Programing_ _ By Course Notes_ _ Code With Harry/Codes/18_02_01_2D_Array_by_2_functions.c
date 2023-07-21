

// //#18_02_01_2D_Array_by_2_functions

// #include <stdio.h>

// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ////////////////////// THIS SOLUTION FOR RESPECTIVE PROGRAM IS NOT COMPLETED........ALSO............. SOLUTION IS LITTLE BIT WRONG...............
// // DON'T KNOW WHAT IS THE ERROR..................................................................................................................

// int main()
// {
//     int n_people;
//     int n_data;

//     printf("How many person's data you have to store ?\n ");
//     scanf("%d", &n_people);

//     printf("How much data you have to store for every single person ?\n ");
//     scanf("%d", &n_data);

//     int data[n_people][n_data];

//     for (int i = 0; i < n_people; i++)
//     {
//         for (int j = 0; j < n_data; j++)
//         {
//             printf("Enter person %d's data %d .\n", i + 1, j + 1);
//             scanf("%d", &data[n_people][n_data]);
//         }
//     }

//     display(data, n_people, n_data);
// }


// void display(int* data, int n_people, int n_data)
// {
//     for (int i = 0; i < n_people; i++)
//     {
//         for (int j = 0; j < n_data; j++)
//         {
//             printf("Your confedential data of person %d & its data %d is %d.\n", i + 1, j + 1,(data[i][j]) ); // here is something wrong.....
//         }
//     }
//     return 0;
// }


//..................... Above way is little bit wrong....................Below is right way of solution.............
// 2D_Array_by_2_functions

//#18_03_QUIZ_9_37_01.....Code with Harry
#include <stdio.h>


int main()
{
    int n_people;
    int n_data;

    printf("How many person's data you have to store ?\n ");
    scanf("%d", &n_people);

    printf("How much data you have to store for every single person ?\n ");
    scanf("%d", &n_data);

    int data[n_people][n_data];

    for (int i = 0; i < n_people; i++)
    {
        for (int j = 0; j < n_data; j++)
        {
            printf("Enter person %d's data %d .\n", i + 1, j + 1);
            scanf("%d", &data[i][j]);
        }
    }

    display(data, n_people, n_data);
}


void display(int* data, int n_people, int n_data)
{
    for (int i = 0; i < n_people; i++)
    {
        for (int j = 0; j < n_data; j++)
        {
            int element=*((data+ i * n_data)+j);
            printf("Your confedential data of person %d & its data %d is %d.\n", i + 1, j + 1,element); 
            
        }
    }
    
}